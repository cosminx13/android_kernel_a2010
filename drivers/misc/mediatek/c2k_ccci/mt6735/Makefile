ifeq ($(CONFIG_EVDO_DT_SUPPORT), y)

include $(srctree)/drivers/misc/mediatek/Makefile.custom

obj-y := c2k_platform.o

else
obj-  := dummy.o # avoid build error
endif
