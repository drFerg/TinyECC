# Makefile for testECDSA

COMPONENT=testECDSA

#change the packet length to 102 bytes
MSG_SIZE=102

#increase the task queue size
#PFLAGS += -DTOSH_MAX_TASKS_LOG2=8

##choose curve parameter
#CFLAGS+=-DSECP128R1
#CFLAGS+=-DSECP128R2
#CFLAGS+=-DSECP160K1
CFLAGS+=-DSECP160R1
#CFLAGS+=-DSECP160R2
#CFLAGS+=-DSECP192K1
#CFLAGS+=-DSECP192R1


#use test vector for secp160r1 to show the correctness of TinyECC
#CFLAGS+=-DTEST_VECTOR
#CFLAGS+=-DCODE_SIZE

##choose different optimization techniques
##NN
CFLAGS+=-DBARRETT_REDUCTION  #barrett reduction
CFLAGS+=-DHYBRID_MULT  #hybrid multipliation
CFLAGS+=-DHYBRID_SQR  #hybrid squre
CFLAGS+=-DCURVE_OPT  #optimization for secg curve
##ECC
CFLAGS+=-DPROJECTIVE  #projective coordinate
CFLAGS+=-DSLIDING_WIN  #sliding window method, window size is defined in ECC.h
##ECDSA
CFLAGS+=-DSHAMIR_TRICK  #shamir trick, windows size is defined in ECDSAM.nc
CFLAGS+=-I../KNoT/lib

include $(MAKERULES) 
