#include <linux/init.h>
#include <linux/module.h>

static int __init bbr_register(void)
{
    printk(KERN_WARNING"Hello, world !\n");
    return 0;
}

static void __exit bbr_unregister(void)
{
    printk(KERN_WARNING"Hello, world !\n");
    return 0;
}

module_init(bbr_register);
module_exit(bbr_unregister);
MODULE_AUTHOR("Xaycn");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("DEMO MOD");
