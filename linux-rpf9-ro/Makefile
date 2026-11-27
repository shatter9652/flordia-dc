# SPDX-License-Identifier: GPL-2.0-only
#
# Out-of-tree build of the read-only RPF9 module.

KERNELRELEASE ?= $(shell uname -r)
KERNEL_DIR    ?= /lib/modules/$(KERNELRELEASE)/build
PWD           := $(shell pwd)

obj-m = rpf9.o
rpf9-y := toc.o cipher.o super.o namei.o file.o

default:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

install:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules_install

clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean

.PHONY: default install clean
