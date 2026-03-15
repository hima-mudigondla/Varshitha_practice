DESCRIPTION="Recipe for basic device driver"

LICENSE="CLOSED"

SRC_URI="file://driver.c \
	file://Makefile \
"

S="${WORKDIR}"

inherit module


