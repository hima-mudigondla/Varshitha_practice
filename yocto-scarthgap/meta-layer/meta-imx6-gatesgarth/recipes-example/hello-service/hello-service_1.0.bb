DESCRIPTION="Recipe for helloc service file"
LICENSE="CLOSED"
inherit systemd

SYSTEMD_AUTO_ENABLE = "enable"
SYSTEMD_SERVICE_${PN} = "helloc.service"

SRC_URI_append="file://helloc.service"
S="${WORKDIR}"

do_install(){
	install -d ${D}/lib/systemd/system
	install -m 0644	${S}/helloc.service ${D}/lib/systemd/system 
}

FILES_${PN} += "lib/systemd/system/helloc.service"
