DESCRIPTION="Recipe for root images for viyara"

require recipes-core/images/core-image-minimal.bb

IMAGE_INSTALL_append=" hellocmake helloconf libhello pahomqtt led ledpaho hello-service" 
