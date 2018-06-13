
/* Header files */
#include <linux/module.h>	    /* module_init,module_exit */
#include <linux/fs.h>		    	/* struct file_operations */
#include <linux/cdev.h>		  	/* cdev_alloc,cdev_add */
#include <linux/device.h>	  	/* device_create,class_create */
#include <linux/slab.h>		 		/* for kmalloc,kfree */
#include <linux/uaccess.h>
#include <linux/gfp.h>		  	/* for kmalloc function */

/*Project specific include files*/
#include <linux/i2c.h>		  	/* for I2c */
#include <linux/i2c-dev.h>		/* for I2C */

/* Macros */
#define FIRST_MINOR	10		/* first minor number */
#define NR_DEVS		1	    	/* Number of device numbers */

/*new*/
#define LCD_SLAVE		0x3E
#define BUS			0x00
#define REG_MODE1		0x00
#define REG_MODE2		0x01
#define REG_OUTPUT		0x08

//commands
#define LCD_CLEARDISPLAY	0x01
#define LCD_RETURNHOME		0x02
#define LCD_ENTRYMODESET	0x04
#define LCD_DISPLAYCONTROL	0x08
#define LCD_CURSORSHIFT		0x10
#define LCD_FUNCTIONSET 	0x20
#define LCD_SETCGRAMADDR	0x40
#define LCD_SETDDRAMADDR	0x80

//display entry mode
#define LCD_ENTRYRIGHT		0x00
#define LCD_ENTRYLEFT		0x02
#define LCD_ENTRYSHIFTINCREMENT 0x01
#define LCD_ENTRYSHIFTDECREMENT 0x00

//display on/off control
#define LCD_DISPLAYON		0x04
#define LCD_DISPLAYOFF		0x00
#define LCD_CURSORON		0x02
#define LCD_CURSOROFF		0x00
#define LCD_BLINKON		0x01
#define LCD_BLINKOFF		0x00

// flags for display/cursor shift
#define LCD_DISPLAYMOVE 	0x08
#define LCD_CURSORMOVE		0x00
#define LCD_MOVERIGHT		0x04
#define LCD_MOVELEFT		0x00

// flags for function set
#define LCD_8BITMODE		0x10
#define LCD_2LINE		0x08

//variables 
char * lcd_text_; //variable to store user space lcd_text data

//function definitions
s32 writeByteRegister(struct i2c_client *client,u8 reg, u8 value);
void clearLCD(struct i2c_client *client);
void writeToLCD(struct i2c_client *client, const char *c);
void initLCD(struct i2c_client *client);
size_t write(struct file *, const char *buf, size_t c);


/* Function Declarations for syscall definitions */
int lcd_Open(struct inode *inode, struct file *filep);
int lcd_Release(struct inode *in, struct file *fp);
static ssize_t lcd_read(struct file *, char *, size_t, loff_t *); /* reading data from lcd */
static ssize_t lcd_write(struct file *, const char *, size_t, loff_t *);/* write data to lcd */
struct i2c_msg msg[1];         /* structure for each message */
struct i2c_msg msg1[1];        /* structure for each message */
struct i2c_client client1;

/* @file_operations - Operations which can be performed with the device */	 
struct file_operations fops = {
		.owner = THIS_MODULE,
		.write = writeToLCD,
};


/* function declarations of i2c_driver */
static int lcd_probe(struct i2c_client *client, const struct i2c_device_id *id);
static int lcd_remove(struct i2c_client *client);

/* list of devices supported by my driver */
static struct i2c_device_id lcd_id[] = {
		{ "lcd_i2c", 0 },
};

static struct i2c_driver lcd_driver = {
		.driver.name    = "lcd_i2c",
		.probe          = lcd_probe,
		.remove         = lcd_remove,
		.id_table       = lcd_id,
};

/* 
 * lcd_probe - probe function of driver
 * @client - pointer to structure client which has the address, algorithm followed by the device
 * @id - pointer to structure i2c_device which is maintained for the driver module
 *
 * Description - getting the address of the lcd device connected
 *
 * return value - 0 
 */

static int lcd_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
                printk(KERN_ALERT "In probe function\n");
		client1.addr = client->addr;
		client1.adapter = client->adapter;
		initLCD(&client1);
		writeToLCD(&client1,"nice!");

		return 0;
}

s32 writeByteRegister(struct i2c_client *client,u8 reg, u8 value)
{
	s32 res = -1;
	res = i2c_smbus_write_byte_data(client, reg, value);

	if (res < 0)
	{
		/* ERROR HANDLING: i2c transaction failed */
		//printk("%s: Error reading reg: 0x%x, code:%d \n",TAG,reg,res);
	}
	return res;
}


void clearLCD(struct i2c_client *client)
{
	writeByteRegister(client, 0x00, LCD_CLEARDISPLAY );
}
/*
size_t write(struct file *, const char *buf, size_t c)
{
	writeToLCD(&client1, buf);
}
*/
void writeToLCD(struct i2c_client *client, const char *c)
{

	int ascii_val=0;
	int i;
	for(i = 0 ; i < 2; i++)
	{
		ascii_val = (int)c[i];				
		writeByteRegister(client, 0x40, ascii_val);
	}
}

void initLCD(struct i2c_client *client)
{

	writeByteRegister(client, 0x00, LCD_FUNCTIONSET | LCD_2LINE );
	//msleep(10);
	writeByteRegister(client, 0x00,LCD_DISPLAYCONTROL | LCD_DISPLAYON 
						| LCD_CURSORON | LCD_BLINKON );
	//msleep(10);
	writeByteRegister(client, 0x00, LCD_CLEARDISPLAY );
	//msleep(40);
	writeByteRegister(client, 0x00,LCD_ENTRYMODESET | LCD_ENTRYLEFT 
						| LCD_ENTRYSHIFTDECREMENT );

}


/* 
 * lcd_remove - remove function of driver 
 * @client - pointer to structure client which has the address, algorithm followed by the device
 *
 * return value - 0
 */

static int lcd_remove(struct i2c_client *client)
{
		printk(KERN_ALERT "In remove function\n");
		return 0;
}

/* Global variables */
char *devname;		  /* contains device name */
int majNo;		  /* holds major number */
static dev_t lcd_dev;  /* encodes major number and minor number */
struct cdev *lcd_cdev; /* holds character device driver descriptor */
static int val;       	  /* for i2c_driver structure probe */

/* To accept input from the command line */
module_param(devname, charp, 0);

/* class and device structures */
static struct class *lcd_char_class;
static struct device *lcd_char_device;


/* 
 * myRelease - close function of the pseudo driver 
 * @in - pointer to structure inode
 * @fp - pointer to structure file
 *
 * return value - 0 
 */

int lcd_Release(struct inode *in, struct file *fp)
{
		printk(KERN_INFO "File released \n");
		return 0;
}

/*
 * myinit - init function of the kernel module
 *
 * Description - registering the driver 
 * return value - 0
 */

static int __init lcd_init(void)
{
		int status;  /* checking the return value for alloc_chrdev_region */
		int ret = 0; /* checking error values */

		/* Allocating Device Numbers */
		status = alloc_chrdev_region(&lcd_dev, FIRST_MINOR, NR_DEVS, devname);
		if (status < 0) {
				printk(KERN_NOTICE "Device numbers allocation failed: %d \n", status);
				goto err;
		}

		printk(KERN_INFO "Major number allocated = %d \n", MAJOR(lcd_dev));
		lcd_cdev = cdev_alloc();	/* Allocate memory for my_cdev */
		if (lcd_cdev == NULL ) {
				printk(KERN_ERR "cdev_alloc failed \n");
				goto err_cdev_alloc;
		}

		cdev_init(lcd_cdev, &fops); 	/* Initialize my_cdev with fops */
		lcd_cdev->owner = THIS_MODULE;

		status = cdev_add(lcd_cdev, lcd_dev, NR_DEVS);	/* Add my_cdev to the list */
		if (status) {
				printk(KERN_ERR "cdev_add failed \n");
				goto err_cdev_add;
		}

		/* Create a class and an entry in sysfs */
		lcd_char_class = class_create(THIS_MODULE, devname);
		if (IS_ERR(lcd_char_class)) {
				printk(KERN_ERR "class_create() failed \n");
				goto err_class_create;
		}

		/* create mychar_device ni sysfs and an device entry will be made in /dev directory */
		
		lcd_char_device = device_create(lcd_char_class, NULL, lcd_dev, NULL, devname);
		if (IS_ERR(lcd_char_device)) {
				printk(KERN_ERR "device_create() failed \n");
				goto err_device_create;
		}

		val = i2c_add_driver(&lcd_driver);
		if (val) {
				printk("Registering I2C driver failed, errno is %d\n", val);

	err_device_create:
				class_destroy(lcd_char_class);

	err_class_create:
				cdev_del(lcd_cdev);

	err_cdev_add:
				kfree(lcd_cdev);

	err_cdev_alloc:
				unregister_chrdev_region(lcd_dev, NR_DEVS);
	err:
				return ret;
		}

		return 0;
}


/*
 * myexit - cleanup function of the kernel module
 * 
 * Description - unregister the driver
 */

static void __exit lcd_exit(void)
{
		printk(KERN_INFO "exiting the character Driver \n");

		device_destroy(lcd_char_class, lcd_dev);
		class_destroy(lcd_char_class);
		cdev_del(lcd_cdev);
		unregister_chrdev_region(lcd_dev, NR_DEVS);
		i2c_del_driver(&lcd_driver);

		return ;

}

module_init(lcd_init);
module_exit(lcd_exit);

MODULE_LICENSE("GPL");

