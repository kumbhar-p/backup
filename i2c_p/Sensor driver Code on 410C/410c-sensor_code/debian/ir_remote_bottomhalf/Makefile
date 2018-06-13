obj-m := fresh_ir_remote.o 

#KDIR := /home/nadaf/Nadaf/debian/kernel_4.5
#KDIR := /lib/modules/4.2.0-27-generic/build
KDIR := /home/nadaf/Nadaf/debian/kernel_4.2/build

PWD  := $(shell pwd)

ARCH := arm64

CROSS_COMPILE := /home/nadaf/Nadaf/debian/tool_chain/gcc-linaro-4.8-2015.06-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-

all:
	    $(MAKE) -C $(KDIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
