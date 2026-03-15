TO COMPILE YOCTO SCARTHGAP VERSION:
-------------------------------------------

* Open the github source  **https://github.com/nxp-imx/imx-manifest/tree/imx-linux-scarthgap**

* Install the REPO utility:
	- mkdir ~/bin
	- curl http://commondatastorage.googleapis.com/git-repo-downloads/repo  > ~/bin/repo
	- chmod a+x ~/bin/repo
	- PATH=${PATH}:~/bin

* Install the HOST packages:
	- sudo apt install gawk wget git diffstat unzip texinfo gcc build-essential chrpath socat cpio python3 python3-pip python3-pexpect xz-utils debianutils iputils-ping python3-git python3-jinja2 python3-subunit zstd liblz4-tool file locales libacl1
	- sudo locale-gen en_US.UTF-8 


* Download the yocto project BSP:
	- mkdir scarthgap
	- cd scathgap
	- repo init -u https://github.com/nxp-imx/imx-manifest -b imx-linux-scarthgap -m imx-6.6.52-2.2.1.xml 
	- repo sync 

* Copy the downloads and sstate-cache folders

* Setup build folder for a BSP release:
	- MACHINE=mys-6ull DISTRO=fsl-imx-fb source ./imx-setup-release.sh -b build


* Build an image:
	- bitbake core-image-minimal

--------------------------------------------------------------------------------------------------------------------------------

* As for the DTS files:
	- Modify the .dts files and add them in "Makefile" and compile to create binaries(.dtb) files
	- After the .dtb files generated add them to git and create patch files
		- git add .
		- git commit -m "Add viyara6ull GPMI WEIM device tree"
		- git format-patch -1  ***It will create the patch files"

* Copy the patch files to your meta layer and create .bbappend files


