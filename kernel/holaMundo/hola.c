#include <linux/module.h> /* Necesario en todos los modulos */
#include <linux/kernel.h> /* Necesario para alertas  e info como KERN_INFO */
#include <linux/init.h>   /* Necesario para las macros init y exit */
#define DRIVER_AUTHOR "Jorge Cuecuecha"
#define DRIVER_DESC "Mi primer hola en kernel"
static int __init inicio(void)
{
printk(KERN_ALERT "Hello, Mundo \n");
return 0;
}
static void __exit fin(void)
{
printk(KERN_INFO "Adios, Mundo \n");
}
module_init(inicio);
module_exit(fin);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
