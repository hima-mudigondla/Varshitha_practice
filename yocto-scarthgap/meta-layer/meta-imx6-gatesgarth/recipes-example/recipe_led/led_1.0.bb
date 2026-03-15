DESCRIPTION="Recipe for led test on imx6"
LICENSE="CLOSED"

SRC_URI="file://led_on_off.c"
S="${WORKDIR}"

do_compile(){
	cd ${S}
	${CC} ${CFLAGS} ${LDFLAGS} led_on_off.c -o led_on_off
}

do_install(){
	install -d ${D}/usr/bin
	install -m 777 ${S}/led_on_off ${D}/usr/bin
}
