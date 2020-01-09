KERNEL := /usr/src/linux-headers-`uname -r`

OBJECTS := $(wildcard src/*.c)

.PHONY: all clean

all:
	make -C $(KERNEL) M=`pwd` 

clean:
	make -C $(KERNEL) M=`pwd` clean


