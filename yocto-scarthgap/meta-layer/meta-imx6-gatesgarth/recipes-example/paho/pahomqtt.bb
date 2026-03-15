DESCRIPTION="REcipe for pahomqtt"

LICENSE="EPL-2.0"
LIC_FILES_CHKSUM="file://LICENSE;md5=fd3b896dadaeec3410d753ffaeadcfac"

SRC_URI="git://github.com/eclipse-paho/paho.mqtt.c.git;protocol=https;nobranch=1"
SRCREV="c4381a707a36967708deabb0c55179dd61075eac"

S="${WORKDIR}/git"
DEPENDS="openssl"

inherit cmake
