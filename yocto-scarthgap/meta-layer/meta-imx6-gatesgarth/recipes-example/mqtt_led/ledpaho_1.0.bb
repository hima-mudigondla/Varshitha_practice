DESCRIPTION="Recipe for led using paho mqtt"
LICENSE="CLOSED"

SRC_URI="file://led_paho.c"
S="${WORKDIR}"

DEPENDS="paho-mqtt-c"

do_compile(){
	cd ${S}
	${CC} ${LDFLAGS} ${CFLAGS} -o led_paho led_paho.c -lpaho-mqtt3c
}

do_install(){
	install -d ${D}/usr/bin
	install -m 0755 ${S}/led_paho ${D}/usr/bin
}
