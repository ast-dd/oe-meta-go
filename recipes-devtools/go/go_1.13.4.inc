require go.inc

DEPENDS = "go-bootstrap-native"

SSTATE_SCAN_CMD = "true"

SRC_URI = "${SRC_URI_PREFIX}/go${PV}.src.tar.gz;subdir=go-${PV}"
SRC_URI[md5sum] = "74d8e97afcf45fea248d15e2afe25b7a"
SRC_URI[sha256sum] = "95dbeab442ee2746b9acf0934c8e2fc26414a0565c008631b04addb8c02e7624"

LIC_FILES_CHKSUM = "file://${WORKDIR}/go-${PV}/go/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707"
