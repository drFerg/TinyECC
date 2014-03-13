README for TinyECC Version 2.0
Modified: Fergus Leahy, 2014
Author/Contact: An Liu, liuan79@gmail.com

Introduction
------------

TinyECC is a software package providing ECC-based PKC operations that 
can be flexibly configured and integrated into sensor network 
applications. It provides a digital signature scheme (ECDSA),  a key 
exchange protocol (ECDH), and a public key encryption scheme (ECIES). 
It provides a number of optimization switches, which can turn 
specific optimizations on or off based on developer's needs.

TinyECC 2.0 supports MICA2/MICAz, TelosB/Tmote Sky, BSNV3, and Imote2
motes. It supports SECG recommended 128-bit, 160-bit and 192-bit
elliptic curve domain parameters.

Update
------

Added the ability to save the state of ECC and ECDSA when changing between keys, thus saving the initilisation times when repeatedly switching.
Also modified some return values and will add some documentation to describe them in more detail.

How to install
--------------

1) Install TinyOS 2.1.1 or later version. http://docs.tinyos.net/index.php/Getting_started

2) Extract TinyECC-2.0.zip to directory /opt/tinyos-2.1.1/apps/TinyECC-2.0.


Interfaces provided
-------------------

1) NN.nc defines the interface NN, which provides big natural number
operations. Read NN.nc for more details. NNM.nc implements this
interface.

2) ECC.nc defines the interface ECC, which provides the basic
elliptic curve operations and enhanced elliptic curve operations based
on sliding window method and projective coordinate system. ECCM.nc 
implements this interface.

3) ECDSA.nc defines the interface ECDSA, which provides the ECDSA
signature generation and verification. Read ECDSA.nc for more
details. ECDSAM.nc implements this interface.

4) ECIES.nc defines the inerface ECIES, which provides the ECIES 
encryption and decryption. ECIESM.nc implements this interface.

5) ECDH.nc defines the interface ECDH, which provides the ECDH key
establishment. ECDHM.nc implements this interface.

6) SHA1.nc defines the interface SHA1, which provides the SHA-1
functions. SHA1M.nc implements this interface.

7) CurveParam.nc defines the interface CurveParam, which provides one 
function to get the parameters of elliptic curves and another function 
for optimized multiplication with omega. secp128*.nc,
secp160*.nc, secp192*.nc implement this interface to provide
parameters for SECG defined elliptic curves. You only need to define 
curve name in your makefile to select the elliptic curve parameters.


Examples
--------

*** Example 1: ECDSA *** 

testECDSA.nc and testECDSAM.nc are used to measure the execution time 
of ECDSA in TinyECC.

Use the following steps to run this example. Assume you are using MICAz, 
mib510 Programming and Serial Interface Board, which is connected to 
USB through a Serial to USB cable.

1) Program node, and then leave the node on the programming board.
	
> make micaz install mib510,/dev/ttyUSB0

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB0:micaz &

3) Run show_ecdsa in your TinyECC directory.

> java show_ecdsa

If you are using TelosB/Tmote Sky, take the following steps.

1) Plug TelosB into USB port.

> make telosb install

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB0:telosb &

3) in your TinyECC directory.
   
> java show_ecdsa

If you are using Imote2, take the following steps.

1) Plug debug board into USB port and attach an imote2 to the board. 
Suppose that the USB maps to 2 ports, the second one is /dev/ttyUSB2.

> make intelmote2 install openocd

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB2:intelmote2 &

3) Run show_ecdsa

> java show_ecdsa


*** Example 2: ECIES *** 

testECIES.nc and testECIESM.nc are used to measure the execution time 
of ECIES in TinyECC.

Use the following steps to run this example. Assume you are using MICAz,
mib510 Programming and Serial Interface Board, which is connected USB 
port through a Serial to USB cable.

1) Program node, and then leave the node on the programming board.
	
> make -f makefile_ECIES micaz install mib510,/dev/ttyUSB0

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB0:micaz &

3) Run show_ecdsa in your TinyECC directory.

> java show_ecies

If you are using TelosB/Tmote Sky, take the following steps.

1) Plug TelosB into USB port.

> make -f makefile_ECIES telosb install

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB0:telosb &

3) in your TinyECC directory.
   
> java show_ecies

If you are using Imote2, take the following steps.

1) Plug debug board into USB port and attach an imote2 to the board. 
Suppose that the USB maps to 2 ports, the second one is /dev/ttyUSB2.

> make -f makefile_ECIES intelmote2 install openocd

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB2:intelmote2 &

3) Run show_ecdsa

> java show_ecies


*** Example 3: ECDH *** 

testECDH.nc and testECDHM.nc are used to measure the execution time 
of ECDH in TinyECC.

Use the following steps to run this example. Assume you are using MICAz, 
mib510 Programming and Serial Interface Board, which is connected to USB 
port through a Serial to USB cable.

1) Program node, and then leave the node on the programming board.
	
> make -f makefile_ECDH micaz install mib510,/dev/ttyUSB0

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB0:micaz &

3) Run show_ecdsa in your TinyECC directory.

> java show_ecdh

If you are using TelosB/Tmote Sky, take the following steps.

1) Plug TelosB into USB port.

> make -f makefile_ECDH telosb install

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB0:telosb &

3) in your TinyECC directory.
   
> java show_ecdh

If you are using Imote2, take the following steps.

1) Plug debug board into USB port and attach an imote2 to the board. 
Suppose that the USB maps to 2 ports, the second one is /dev/ttyUSB2.

> make -f makefile_ECDH intelmote2 install openocd

2) Run SerialForwarder.

> java net.tinyos.sf.SerialForwarder -comm serial@/dev/ttyUSB2:intelmote2 &

3) Run show_ecdsa

> java show_ecdh


Inline Assembly Code
--------------------

There are some inline assembly code in NNM.nc to speed up natural number 
operations. The inline assembly code is written for Atmega128l(MICAz), 
MSP430(TelosB/Tmote Sky), and XScale(Imote2). If you want to use TinyECC 
for other platforms, you must comment "#define INLINE_ASM" in NN.h or 
implement your own inline assembly code.



Acknowledgement
---------------

NNM.nc is based on the natural number operations in RSAREF2.0.
