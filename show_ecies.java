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
 * show_result.java
 *
 * Author: An Liu
 * Date: 09/15/2005
 */


// imports
import net.tinyos.message.*;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.*;
import java.security.NoSuchAlgorithmException;

public class show_ecies implements MessageListener
{
    int round = 0;

    int n_ticks = 1000; //telosb 32768, micaz 921600, imote2 3250000
    float ecies_init_total = 0;
    float pubkey_total = 0;
    float encrypt_total = 0;
    float decrypt_total = 0;


    /**
     * Main driver.
     *
     * @param argv  arguments
     */
    public static void main(String [] argv)
    {
	if(argv.length != 0){
	    System.out.println("Usage: java show_ecies");
	}else{
	    try{
		new show_ecies();
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

    public show_ecies() throws Exception
    {
        // connect to the SerialForwarder running on the local mote
        MoteIF mote = new MoteIF((net.tinyos.util.Messenger) null);

        // prepare to listen for messages of type result
        mote.registerListener(new private_key_msg(), this);
	mote.registerListener(new public_key_msg(), this);
	mote.registerListener(new time_msg(), this);
	mote.registerListener(new uint8_msg(), this);

        // start listening to the mote
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
	    round++;
	    System.out.println("Private key: ");
	    System.out.print("d: ");
	    private_key_msg PrivateKey = (private_key_msg) msg;
	    get_bn(PrivateKey.get_d(), 0, PrivateKey.get_len());

	}else if(msg instanceof public_key_msg){

	    //public key received
	    System.out.println("Public key: ");
	    public_key_msg PublicKey = (public_key_msg) msg;
	    System.out.print("x: ");
	    get_bn(PublicKey.get_x(), 0, PublicKey.get_len());
	    System.out.print("y: ");
	    get_bn(PublicKey.get_y(), 0, PublicKey.get_len());

	}else if(msg instanceof time_msg){

	    //time result
	    time_msg TimeMsg = (time_msg) msg;
	    if (TimeMsg.get_type() == 0){
		System.out.println("[ time of ECIES.init() is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		ecies_init_total += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 1){
		System.out.println("[ time of public key generation is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		pubkey_total += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 2){
		System.out.println("[ time of ECIES.encrypt() is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		encrypt_total += (float)TimeMsg.get_t()/n_ticks;
	    }else if(TimeMsg.get_type() == 3){
		System.out.println("[ time of ECIES.decrypt() is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");
		decrypt_total += (float)TimeMsg.get_t()/n_ticks;
	    
		System.out.println("Average timing result for " + round + " rounds");
		System.out.println("ECIES.init(): " + ecies_init_total/round);
		System.out.println("public key gen: " + pubkey_total/round);
		System.out.println("encrypt: " + encrypt_total/round);
		System.out.println("decrypt: " + decrypt_total/round);

	    }else{
		System.out.println("Unknown time msg type.");
	    }

	}else if(msg instanceof uint8_msg){

	    uint8_msg pPacket = (uint8_msg) msg;
	    //System.out.print("msg: ");
	    pArray(pPacket.get_content(), 0, pPacket.get_len());
	}else{
	    // report error
	    System.out.println("Unknown message type received.");

	}
    }
}
