obj-m := fresh_ir_remote.o 

KDIR := /Data/out/target/product/msm8916_64/obj/KERNEL_OBJ
#KDIR := /lib/modules/4.2.0-27-generic/build

#KDIR := /lib/modules/$(shell uname -r)/build

PWD  := $(shell pwd)

ARCH := arm64
CROSS_COMPILE := /Data/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android-

all:
	    $(MAKE) -C $(KDIR) ARCH=$(ARCH) CFLAGS_MODULE="-fno-pic" CROSS_COMPILE=$(CROSS_COMPILE) M=$(PWD) modules
#	    $(MAKE) -C $(KDIR) M=$(PWD) modules


clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
