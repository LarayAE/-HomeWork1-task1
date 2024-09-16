#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alex L.");

int var1 = 25; /* The number 0.25 is represented in the code by multiplying it by 100*/
int var2 = 25; /* The number 0.25 is represented in the code by multiplying it by 100*/

#define VAR1 0.25f
#define VAR2 0.25f
#define SUMM_VAR (int)((VAR1 + VAR2) * 100)/*use a preprocessor*/

static int __init hello_init(void)
{
    printk(KERN_ALERT "'task1' module started\n");
    printk(KERN_ALERT "'task1' 0.%d + 0.%d = 0.%d\n", var1, var2, (var1 + var2));
    
    printk(KERN_ALERT "'task1' 0.%d\n", SUMM_VAR);
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_ALERT "'task1' module exited\n");
    return;
}

module_init(hello_init);
module_exit(hello_exit);

