obj-m:=hello.o
KDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)
all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD)
clean:  
	$(MAKE) -C $(KDIR) M=$(PWD) clean 
	@rm -f Module.symvers app
