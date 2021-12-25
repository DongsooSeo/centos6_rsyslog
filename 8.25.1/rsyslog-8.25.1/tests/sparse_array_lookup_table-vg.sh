#!/bin/bash
# added 2015-10-30 by singh.janmejay
# This file is part of the rsyslog project, released under ASL 2.0
echo ===============================================================================
echo \[sparse_array_lookup_table.sh\]: test for sparse-array lookup-table and HUP based reloading of it
. $srcdir/diag.sh init
cp $srcdir/testsuites/xlate_sparse_array.lkp_tbl $srcdir/xlate_array.lkp_tbl
. $srcdir/diag.sh startup-vg array_lookup_table.conf
. $srcdir/diag.sh injectmsg  0 1
. $srcdir/diag.sh wait-queueempty
. $srcdir/diag.sh assert-content-missing "foo"
. $srcdir/diag.sh injectmsg  0 5
. $srcdir/diag.sh wait-queueempty
. $srcdir/diag.sh content-check "msgnum:00000001: foo_old"
. $srcdir/diag.sh content-check "msgnum:00000002: foo_old"
. $srcdir/diag.sh content-check "msgnum:00000003: bar_old"
. $srcdir/diag.sh content-check "msgnum:00000004: bar_old"
. $srcdir/diag.sh assert-content-missing "baz"
cp $srcdir/testsuites/xlate_sparse_array_more.lkp_tbl $srcdir/xlate_array.lkp_tbl
. $srcdir/diag.sh issue-HUP
. $srcdir/diag.sh await-lookup-table-reload
. $srcdir/diag.sh injectmsg  0 6
. $srcdir/diag.sh wait-queueempty
. $srcdir/diag.sh content-check "msgnum:00000000: foo_new"
. $srcdir/diag.sh content-check "msgnum:00000001: foo_new"
. $srcdir/diag.sh content-check "msgnum:00000002: bar_new"
. $srcdir/diag.sh content-check "msgnum:00000003: bar_new"
. $srcdir/diag.sh content-check "msgnum:00000004: baz"
. $srcdir/diag.sh content-check "msgnum:00000005: baz"
cp $srcdir/testsuites/xlate_sparse_array_more_with_duplicates_and_nomatch.lkp_tbl $srcdir/xlate_array.lkp_tbl
. $srcdir/diag.sh issue-HUP
. $srcdir/diag.sh await-lookup-table-reload
. $srcdir/diag.sh injectmsg  0 15
echo doing shutdown
. $srcdir/diag.sh shutdown-when-empty
echo wait on shutdown
. $srcdir/diag.sh wait-shutdown-vg
. $srcdir/diag.sh check-exit-vg
. $srcdir/diag.sh content-check "msgnum:00000000: quux"
. $srcdir/diag.sh content-check "msgnum:00000001: quux"
. $srcdir/diag.sh content-check "msgnum:00000002: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000003: baz_latest"
. $srcdir/diag.sh content-check "msgnum:00000004: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000005: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000006: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000007: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000008: baz_latest"
. $srcdir/diag.sh content-check "msgnum:00000009: baz_latest"
. $srcdir/diag.sh content-check "msgnum:00000010: baz_latest"
. $srcdir/diag.sh content-check "msgnum:00000011: baz_latest"
. $srcdir/diag.sh content-check "msgnum:00000012: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000013: foo_latest"
. $srcdir/diag.sh content-check "msgnum:00000014: foo_latest"
. $srcdir/diag.sh exit
