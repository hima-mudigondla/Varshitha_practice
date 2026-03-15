#include<linux/init.h>
#include<linux/module.h>

static int __init driver_init(void)
{
	printk(KERN_INFO "Module_init: Module initialised successfully!\n");
	return 0;
}

static void __exit driver_exit(void)
{
	printk(KERN_INFO "Module_exit: Module exited succesfully!\n");
}

MODULE_LICENSE("GPL");
module_init(driver_init);
module_exit(driver_exit);
