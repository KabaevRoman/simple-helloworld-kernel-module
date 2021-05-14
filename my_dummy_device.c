#include <linux/module.h>	// нужно для всех модулей
#include <linux/kernel.h>	// для KERN_INFO
#include <linux/init.h>		// чтобы сделать кастомное название инита и выхода 

static int __init my_dummy_device_init(void)
{
	printk(KERN_INFO "kernel module uploaded\n");
	return 0;
}

static void __exit my_dummy_device_exit(void)
{
	printk(KERN_INFO "kernel module unloaded\n");
}

module_init(my_dummy_device_init);//когда модуль подключается 
module_exit(my_dummy_device_exit);//когда модуль отключается
//ниже будет информация о модуле для modinfo
MODULE_LICENSE("GPL");//GNU Public License тип лицензии
MODULE_AUTHOR("Kabaev");//автор модуля
MODULE_DESCRIPTION("It prints connection and disconnection status ):");//описание модуля
