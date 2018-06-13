#include <linux/init.h>
#include <linux/module.h>
//#include <linux/moduleparam.h>
MODULE_LICENSE("Dual BSD/GPL");
/*
static char *whom = "world";
static int howmany = 1;

module_param(howmany,int, S_IRUGO);
module_param(whom,charp, S_IRUGO);
*/
static int hello_init(void)
{
  //      int i;
 //	for(i = 0; i < howmany; i++)	
//		printk(KERN_ALERT "Hello %s for %d\n",whom, i);
		printk(KERN_ALERT "Hello world\n");
	return 0;
}
static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(hello_init);
module_exit(hello_exit);

//MODULE_AUTHOR("Global edge");
//MODULE_DESCRIPTION("kernel symbol table");

