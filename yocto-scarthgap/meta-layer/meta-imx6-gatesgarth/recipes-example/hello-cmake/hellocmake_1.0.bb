DESCRIPTION="Recipe .bb file for hellocmake"
LICENSE="CLOSED"
SRC_URI="file://hello.c \
	 file://CMakeLists.txt"
S="${WORKDIR}"
inherit cmake

