DESCRIPTION="receipr(.bb) for hello cpp example"
LICENSE="CLOSED"
SRC_URI="file://hello.cpp"
S="${WORKDIR}"
do_compile(){
        cd ${S}
        ${CXX} ${CXXFLAGS} hello.cpp -o hellocpp ${LDFLAGS}
}
do_install(){
        install -d ${D}/usr/bin
        install -m 777 ${S}/hellocpp ${D}/usr/bin
}


