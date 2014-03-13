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

public class show_barrett implements MessageListener
{
    int round = 0;

    int n_ticks = 921600; //telosb 32768, micaz 921600, imote2 3250000
    float ecc_init_total = 0;
    float ecdsa_init_total = 0;
    float pubkey_total = 0;
    float sign_total = 0;
    float verify_total = 0;


    /**
     * Main driver.
     *
     * @param argv  arguments
     */
    public static void main(String [] argv)
    {
	if(argv.length != 1){
	    System.out.println("Usage: java show_barrett [micaz|telosb|imote2]");
	}else{
	    try{
		new show_barrett(argv[0]);
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

    public show_barrett(String platform) throws Exception
    {
	if(platform.equals("micaz")){
	    n_ticks = 921600;
	}else if(platform.equals("telosb")){
	    n_ticks = 32768;
	}else if(platform.equals("imote2")){
	    n_ticks = 3250000;
	}else{
	    System.out.println("can not recognize platform " + platform);
	    System.exit(0);
	}

        // connect to the SerialForwarder running on the local mote
        MoteIF mote = new MoteIF((net.tinyos.util.Messenger) null);

        // prepare to listen for messages of type result
	mote.registerListener(new time_msg(), this);
	mote.registerListener(new packet_msg(), this);

        // start listening to the mote
        mote.start();
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

	if(msg instanceof time_msg){

	    //time result
	    time_msg TimeMsg = (time_msg) msg;
		System.out.println("[ time of mod is " + (float)TimeMsg.get_t()/n_ticks + " sec ]");

	    }else{
		System.out.println("Unknown time msg type.");
	    }

    }
}
