

KBRANCH ?= "linux-6.12.y"
require recipes-kernel/linux/linux-yocto.inc

SRCREV_meta = "1f6ab68a1d86836bf1b82b791df03da3cfeacb3f"
SRCREV_machine = "ef4999852d307d38cfdecd91ed6892cc03beb9b8"
INC_PR := "r1"

SRC_URI = "git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git;protocol=https;name=machine;branch=${KBRANCH}; \
	git://git.yoctoproject.org/yocto-kernel-cache;type=kmeta;name=meta;branch=yocto-6.12;destsuffix=yocto-kmeta"

LIC_FILES_CHKSUM = "file://COPYING;md5=6bc538ed5bd9a7fc9398086aedcd7e46"

LINUX_VERSION ?= "6.12.25"
KMETA = "kernel-meta"
KCONF_BSP_AUDIT_LEVEL = "1"

PV = "6.12.25"
KERNEL_VERSION_SANITY_SKIP = "1"

PR := "${INC_PR}.0"

KMACHINE = "common-pc-64"
COMPATIBLE_MACHINE = "${MACHINE}"



