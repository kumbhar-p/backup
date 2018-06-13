#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int gouse_driver_init(void)
{
	printk("hello world\n");
	return 0;
}

static void gouse_driver_exit( void )
{
	printk("Good bye\n");
	return;
}

module_init(gouse_driver_init);
module_exit(gouse_driver_exit);











/*

	NOTE : 
		alloc_chrdev_region : 
		It will get major number for device dynamically, and create device 
		entry in the directory " cat /proc/devices ".

		class_create :
		It will return the pointer to structure of "struct class", this pointer
		is used by device_create inorder to create device node, if will do not 
		use class_create then device create will not create device node.

		device_create : 
		it will create the device node (special node) in the "/dev/" directory

		gouse_driver_init and gouse_driver_exit :
		these are intilization and exit functions , the init function will 
		invoke when the module is inserted in the kernel, and exit function 
		when module is removed,If we do not use init and exit function in our 
		function, it will not give error, we can generate module and we can 
		insert in kernel.we can use any name for init and exit functions but 
		we have tell to kernel intit and exit functions name using macros
        "module_init() and module_exit()"


		#include<linux/fs> :
		For alloc_chrdev_region and macros MAJOR and MINOR.

		#include<linux/module.h> :
		For module_init ,module_exit and MODULE_LICENSE macros
		
		#include<linux/cdev.h> :
		For cdev_alloc, cdev_init,cdev_add

		#include<linux/device.h> :
		For device_create, class_create

		modprobe :

		For modprobe we have to add "$(MAKE) -C $(KDIR) M=$(PWD) modules_install " 
		in makefile and and it will create directory "extra" in /lib/modules/<var> 
		and then it will install "module_name.ko" module in directory 
		"/lib/modules/<linux-var>/extra/ ", then perform the "modprobe module_name" 
		(without .ko extension).

		OR

		create one directory "extra" in /lib/modules/<var>/ then copy your .ko
		file in "extra" directory and then do "modprobe module_name"(without .ko)



*/





