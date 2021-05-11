SUMMARY = "MA35D1 image based on mbed-edge."
LICENSE = "Proprietary"

inherit core-image 

IMAGE_LINGUAS = "en-us"

IMAGE_FEATURES += "package-management ssh-server-dropbear hwcodecs"

IMAGE_FSTYPES_remove = " ubi spinand nand"

PACKAGECONFIG_append = " "

IMAGE_INSTALL_append = "\
    mbed-edge-core \
    mbed-edge-examples \
    "

# Define to null ROOTFS_MAXSIZE to avoid partition size restriction
IMAGE_ROOTFS_MAXSIZE = ""

CORE_IMAGE_EXTRA_INSTALL += " \
    "

