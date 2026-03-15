DESCRIPTION="Recipe for mbpoll"

LICENSE="GPL-3.0"
LIC_FILES_CHKSUM="file://COPYING;md5=1ebbd3e34237af26da5dc08a4e440464"

SRC_URI="https://github.com/epsilonrt/mbpoll/archive/refs/tags/v1.4.tar.gz"
SRC_URI[md5sum]="41130839eb2231b86bd74598eee274f7"
SRC_URI[sha256]="88f4b97c0e6825d3abaf8448092c51e11bc160a3806cb738e0654e1e5751e9e3"

S="${WORKDIR}/mbpoll-1.4"

DEPENDS="libmodbus"

inherit cmake

