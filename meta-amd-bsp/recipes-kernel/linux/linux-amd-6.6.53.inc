FILESEXTRAPATHS:prepend := "${THISDIR}/linux-amd-6.6/linux-amd-6.6.53:"
SRCREV_meta = "dad768d3d6c23e46e232a5b20a7caad80c3dc0e4"
SRCREV_machine = "4ad9fa5c30edc19acf05b2960dd686c29cbe75a2"

SRC_URI:append:v3000 := " \
           file://xgbe.cfg \
           file://amd_io.cfg \
           file://v3000-edac.scc \
           file://v3000-eSPI.scc \
           file://spi.scc \
	  "

SRC_URI:append:siena := " \
           file://ntb.scc \
           file://ntb.cfg \
           file://amd_io.cfg \
           file://prof.scc \
           file://prof.cfg \
	  "

SRC_URI:append:turin := " \
           file://ntb.scc \
           file://ntb.cfg \
           file://amd_io.cfg \
           file://prof.scc \
           file://prof.cfg \
           file://sdci.scc \
           file://sdci.cfg \
	  "

