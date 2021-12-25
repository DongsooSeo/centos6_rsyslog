#!/bin/bash
# added 2016-03-10 by singh.janmejay
# This file is part of the rsyslog project, released under ASL 2.0
echo ===============================================================================
echo \[no-dynstats-json.sh\]: test for verifying stats are reported correctly in json format in absence of any dynstats buckets being configured
. $srcdir/diag.sh init
. $srcdir/diag.sh startup no-dynstats-json.conf
. $srcdir/diag.sh wait-for-stats-flush 'rsyslog.out.stats.log'
echo doing shutdown
. $srcdir/diag.sh shutdown-when-empty
echo wait on shutdown
. $srcdir/diag.sh wait-shutdown
. $srcdir/diag.sh custom-content-check '{ "name": "global", "origin": "dynstats", "values": { } }' 'rsyslog.out.stats.log'
. $srcdir/diag.sh exit
