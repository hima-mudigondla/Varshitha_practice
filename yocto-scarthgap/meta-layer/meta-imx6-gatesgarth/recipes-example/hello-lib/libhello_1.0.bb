DESCRIPTION="Recipe for hello library"
LICENSE="CLOSED"
SRC_URI="file://hello.h \
	 file://hello.c \
	 file://main.c"
S="${WORKDIR}"
do_compile(){
	${CC} ${CFLAGS} -fPIC -c main.c -o main.o
	${CC} ${CFLAGS} -fPIC -c hello.c -o hello.o
	${CC} ${LDFLAGS} -shared -o ${S}/libhello.so.1 ${S}/hello.o ${S}/main.o
}
do_install(){
	install -d ${D}/usr/lib
	install -m 777 ${S}/libhello.so.1 ${D}/usr/lib
	cd ${D}/usr/lib
	ln -sf libhello.so.1 libhello.so
	install -d ${D}/usr/include
	install -m 0644 ${S}/hello.h ${D}/usr/include
}
