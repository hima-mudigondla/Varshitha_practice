SUMMARY="simple hello world program for hello world conf file"
DESCRIPTION="Receipe for .bb filre for auto conf files"
LICENSE="CLOSED"
SRC_URI="file://hello.c \
	file://Makefile.am \
	file://configure.ac"
S="${WORKDIR}"
do_compile(){
	cd ${S}
	${CC} ${LDFLAGS} hello.c -o hello
}
do_install(){
	install -d ${D}/usr/bin
	install -m 0777 ${S}/hello ${D}/usr/bin
}

