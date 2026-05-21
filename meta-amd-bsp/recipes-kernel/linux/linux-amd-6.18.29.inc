FILESEXTRAPATHS:prepend := "${THISDIR}/linux-amd-6.18/linux-amd-6.18.29:"
SRCREV_meta = "fbc4b73674ba3b8493fe22c12e08fccb4a4b2378"
SRCREV_machine = "d31a849ff5011dad5c271b53819a0b279e367d68"

SRC_URI:append:naples := " \
           file://ntb.cfg \
           file://amd_io.cfg \
           file://prof.cfg \
           file://misc.cfg \
	  "
SRC_URI:append:siena := " \
           file://ntb.scc \
           file://amd_io.cfg \
           file://prof.cfg \
           file://misc.cfg \
	  "

SRC_URI:append:turin := " \
           file://ntb.cfg \
           file://amd_io.cfg \
           file://prof.cfg \
           file://sdci.cfg \
           file://misc.cfg \
	  "

SRC_URI:append:e2005 := " \
           file://amd_io.cfg \
           file://prof.cfg \
           file://misc.cfg \
          "
