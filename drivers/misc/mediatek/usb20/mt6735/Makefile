#
# for USB OTG silicon based on Mentor Graphics INVENTRA designs
#
include $(srctree)/drivers/misc/mediatek/Makefile.custom

ccflags-y += -DMUSB_QMU_SUPPORT
#ccflags-y += -DQMU_TASKLET

obj-$(CONFIG_USB_MTK_HDRC)	:= usb20.o usb20_phy.o
obj-$(CONFIG_USB_MTK_HDRC)  += usb20_host.o
obj-$(CONFIG_USB_MTK_OTG)   += usb20_otg_if.o
obj-$(CONFIG_USB_MTK_DEBUG_FS)	+= usb20_phy_debugfs.o
ifeq ($(CONFIG_MTK_AEE_KDUMP),y)
obj-$(CONFIG_USB_MTK_HDRC) += usb_dump.o
endif
