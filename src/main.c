#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

MODULE_DESCRIPTION("Template kernel module");
MODULE_AUTHOR("J");
MODULE_LICENSE("GPL");

static int _module_init(void)
{
	return 0;
}

static void _module_exit(void)
{
}

module_init(_module_init);
module_exit(_module_exit);
