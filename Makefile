obj-m += my_dummy_device.o

		
all:	
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	
test:
	sudo insmod my_dummy_device.ko
	sudo rmmod my_dummy_device
	dmesg|tail

