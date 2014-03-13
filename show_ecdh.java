/**
 * All new code in this distribution is Copyright 2005 by North Carolina
 * State University. All rights reserved. Redistribution and use in
 * source and binary forms are permitted provided that this entire
 * copyright notice is duplicated in all such copies, and that any
 * documentation, announcements, and other materials related to such
 * distribution and use acknowledge that the software was developed at
 * North Carolina State University, Raleigh, NC. No charge may be made
 * for copies, derivations, or distributions of this material without the
 * express written consent of the copyright holder. Neither the name of
 * the University nor the name of the author may be used to endorse or
 * promote products derived from this material without specific prior
 * written permission.
 *
 * IN NO EVENT SHALL THE NORTH CAROLINA STATE UNIVERSITY BE LIABLE TO ANY
 * PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION,
 * EVEN IF THE NORTH CAROLINA STATE UNIVERSITY HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE. THE SOFTWARE PROVIDED HEREUNDER IS ON AN
 * "AS IS" BASIS, AND THE NORTH CAROLINA STATE UNIVERSITY HAS NO
 * OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS. "
 *
 */

/**
 * show_ecdh.java
 *
 * Author: An Liu
 * Date: 05/07/2007
 */


// imports
import net.tinyos.message.*;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.*;
import java.security.NoSuchAlgorithmException;

public class show_ecdh implements MessageListener
{
    int round = 0;

    int n_ticks = 1000; //telosb 32768, micaz 921600, imote2 3250000
    float ecdh_init_total = 0;
    float key_agree_total1 = 0;
    float key_agree_total2 = 0;
    float pubkey_total1 = 0;
    float pubkey_total2 = 0;


    /**
     * Main driver.
     *
     * @param argv  arguments
     */
    public static void main(String [] argv)
    {
	if(argv.length != 0){
	    System.out.println("Usage: java show_ecdh");
	}else{
	    try{
		new show_ecdh();
	    }catch (Exception e){
		System.err.println("Exception: " + e);
		e.printStackTrace();
	    }
	}
    }


    /**
     * Implicit constructor.  Connects to the SerialForwarder,
     * registers itself as a listener for DbgMsg's,
     * and starts listening.
     */

    public show_ecdh() throws Exception
    {
        // connect to the SerialForwarder running on the local mote
        MoteIF mote = new MoteIF((net.tinyos.util.Messenger) null);

        // prepare to listen for messages of type result
        mote.registerListener(new private_key_msg(), this);
	mote.registerListener(new public_key_msg(), this);
	mote.registerListener(new time_msg(), this);
	mote.registerListener(new packet_msg(), this);
	mote.registerListener(new ecdh_key_msg(), this);

        System.out.println("start\n");
    }

    public void pArray(short[] a, int index, int len)
    {
    	for (int i=index; i<index+len; i++){
	    if (a[i] < 16)
		System.out.print("0");
	    System.out.print(Integer.toHexString(a[i]));
	}
    	System.out.println();
    }

    //get big number from array
    public BigInteger get_bn(short[] a, int index, int len)
    {
    	BigInteger tmp;

    	tmp = new BigInteger("0");

    	for (int i=index; i<len+index; i++){
	    tmp = tmp.shiftLeft(8);
	    tmp = tmp.add(BigInteger.valueOf(a[i]));
	}
    	System.out.println(tmp.toString(16));

    	return tmp;
    }

    /**
     * Event for handling incoming result's.
     *
     * @param dstaddr   destination address
     * @param msg       received message
     */
    public void messageReceived(int dstaddr, Message msg)
    {

        // process any result's received
	if(msg instanceof private_key_msg){

	    //private key received
	    private_key_msg PrivateKey = (private_key_msg) msg;
	    System.out.println("Private key" + PrivateKey.get_id() + ": ");
	    get_bn(PrivateKey.get_d(), 0, PrivateKey.get_len());

	}else if(msg instanceof public_key_msg){

	    //public key received
	    public_key_msg PublicKey = (public_key_msg) msg;
	    System.out.println("Public key" + PublicKey.get_id() + ": ");
	    System.out.print("x: ");
	    get_bn(PublicKey.get_x(), 0, PublicKey.get_len());
	    System.out.print("y: ");
	    get_bn(PublicKey.get_y(), 0, PublicKey.get_len());

	}else if(msg instanceof ecdh_key_msg){
	    ecdh_key_msg pPacket = (ecdh_key_msg) msg;
	    System.out.print("established key" + pPacket.get_id() + ": ");
	    pArray(pPacket.get_k(), 0, pPacket.get_len());
	}else if(msg instanceof time_msg){

	    //time result
	    time_msg TimeMsg = (time_msg) msg;
	    if (TimeMsg.get_type() == 0){
		round++;
		System.out.println("[ time of EDH.init() is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		ecdh_init_total += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 1){
		System.out.println("[ time of public key 1 generation is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		pubkey_total1 += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 2){
		System.out.println("[ time of public key 2 generation is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		pubkey_total2 += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 3){
		System.out.println("[ time of ECDH.key_agree() for 1 is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		key_agree_total1 += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 4){
		System.out.println("[ time of ECDH.key_agree() for 2 is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		key_agree_total2 += (float)TimeMsg.get_t()/n_ticks;

		System.out.println("Average timing result for " + round + " rounds");
		System.out.println("ECDH.init(): " + ecdh_init_total/round);
		System.out.println("PK1: " + pubkey_total1/round);
		System.out.println("PK2: " + pubkey_total2/round);
		System.out.println("key_agree1: " + key_agree_total1/round);
		System.out.println("key_agree2: " + key_agree_total2/round);
	    }else{
		System.out.println("Unknown time msg type.");
	    }

	}else{
	    // report error
	    System.out.println("Unknown message type received.");

	}
    }
}
