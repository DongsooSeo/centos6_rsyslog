#!/bin/bash
# rsgtutil utility test 
#	Verifies sample logdata against public ksi verification repository. 
#
# This file is part of the rsyslog project, released under ASL 2.0
#
# Copyright 2016 Rainer Gerhards and Adiscon GmbH.
RSYSLOG_KSI_BIN="http://verify.guardtime.com/ksi-publications.bin"
RSYSLOG_KSI_DEBUG="--show-verified"
RSYSLOG_KSI_LOG="ksi-sample.log"

echo \[ksi-verify-long.sh\]: testing rsgtutil verify function - long options
. $srcdir/diag.sh init

echo "running rsgtutil command with long options"
../tools/rsgtutil $RSYSLOG_KSI_DEBUG --verify --publications-server $RSYSLOG_KSI_BIN $srcdir/testsuites/$RSYSLOG_KSI_LOG

RSYSLOGD_EXIT=$?
if [ "$RSYSLOGD_EXIT" -ne "0" ]; then	# EX_OK
	if [ "$RSYSLOGD_EXIT" -eq "69" ]; then	# EX_UNAVAILABLE
		echo "[ksi-verify-long.sh]: rsgtutil verify failed with service unavailable (does not generate an error)"
		exit 77;
	else
		echo "[ksi-verify-long.sh]: rsgtutil verify failed with error: " $RSYSLOGD_EXIT
		exit 1;
	fi 
fi

# Cleanup temp files
rm -f rsgtutil.out*.log 

echo SUCCESS: rsgtutil verify function - long options