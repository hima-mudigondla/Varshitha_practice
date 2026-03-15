DESCRIPTION="Recipe for libmodbus"

LICENSE="GPL-2.0-only"
LIC_FILES_CHKSUM="file://COPYING.LESSER;md5=4fbd65380cdd255951079008b364516c"

SRC_URI="git://github.com/stephane/libmodbus.git;protocol=https;branch=master"
SRCREV="f9358460ee1f62bcac716ad0444b3bbe7628b204"
S="${WORKDIR}/git"

inherit autotools	
EXTRA_OECONF="--prefix=/usr"

