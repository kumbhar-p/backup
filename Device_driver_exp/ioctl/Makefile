obj-m += ioctl.o 
#KDIR = /lib/modules/$(shell uname -r)/build 
KDIR = /lib/modules/3.13.0-32-generic/build 

all:   
	make -C $(KDIR) M=$(shell pwd) modules   
clean:  
	make -C $(KDIR) M=$(shell pwd) clean 


