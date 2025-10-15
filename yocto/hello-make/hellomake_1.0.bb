DESCRIPTION="receipe for hello.c using make"
LICENSE="CLOSED"
SRC_URI="file://hello.c \
	file://Makefile"
S="${WORKDIR}"
do_compile(){
	oe_runmake
}
do_install(){
	install -d ${D}/usr/bin
	install -m 0777 ${S}/hello ${D}/usr/bin
} 
	
