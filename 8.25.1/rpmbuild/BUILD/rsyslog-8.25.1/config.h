/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Defined if debug mode is enabled (its easier to check). */
/* #undef DEBUG */

/* Defined if debugless mode is enabled. */
/* #undef DEBUGLESS */

/* Indicator that GnuTLS is present */
#define ENABLE_GNUTLS 1

/* Indicator that IMDIAG is present */
/* #undef ENABLE_IMDIAG */

/* Indicator that LIBGCRYPT is present */
#define ENABLE_LIBGCRYPT 1

/* Indicator that RELP is present */
#define ENABLE_RELP 1

/* Regular expressions support enabled. */
#define FEATURE_REGEXP 1

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define if compiler provides atomic builtins */
#define HAVE_ATOMIC_BUILTINS 1

/* Define if compiler provides 64 bit atomic builtins */
#define HAVE_ATOMIC_BUILTINS64 1

/* Define to 1 if you have the `basename' function. */
#define HAVE_BASENAME 1

/* Define to 1 if compiler supports __builtin_expect */
#define HAVE_BUILTIN_EXPECT 1

/* Define to 1 if your system has a working `chown' function. */
#define HAVE_CHOWN 1

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if you have the <curl/curl.h> header file. */
/* #undef HAVE_CURL_CURL_H */

/* Define to 1 if you have the <dbi/dbi.h> header file. */
#define HAVE_DBI_DBI_H 1

/* Define to 1 if libdbi supports the new plugin-safe interface */
/* #undef HAVE_DBI_R */

/* Define to 1 if libdbi supports transactions */
/* #undef HAVE_DBI_TXSUPP */

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `epoll_create' function. */
#define HAVE_EPOLL_CREATE 1

/* Define to 1 if you have the `epoll_create1' function. */
#define HAVE_EPOLL_CREATE1 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdatasync' function. */
#define HAVE_FDATASYNC 1

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* set define */
#define HAVE_GETIFADDRS 1

/* Define to 1 if you have the `getline' function. */
#define HAVE_GETLINE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* set define */
#define HAVE_GLOB_NOMAGIC 1

/* Define to 1 if you have the `gnutls_certificate_set_retrieve_function'
   function. */
#define HAVE_GNUTLS_CERTIFICATE_SET_RETRIEVE_FUNCTION 1

/* Define to 1 if you have the `gnutls_certificate_type_set_priority'
   function. */
#define HAVE_GNUTLS_CERTIFICATE_TYPE_SET_PRIORITY 1

/* Define to 1 if you have the <hadoop/hdfs.h> header file. */
/* #undef HAVE_HADOOP_HDFS_H */

/* Define to 1 if you have the <hdfs.h> header file. */
/* #undef HAVE_HDFS_H */

/* Define to 1 if you have the `inotify_init' function. */
#define HAVE_INOTIFY_INIT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* jemalloc support is integrated. */
/* #undef HAVE_JEMALLOC */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if liblogging-stdlog is available. */
/* #undef HAVE_LIBLOGGING_STDLOG */

/* Define to 1 if you have the <libnet.h> header file. */
/* #undef HAVE_LIBNET_H */

/* Define to 1 if you have the <librdkafka/rdkafka.h> header file. */
#define HAVE_LIBRDKAFKA_RDKAFKA_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the `lseek64' function. */
#define HAVE_LSEEK64 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `malloc_trim' function. */
#define HAVE_MALLOC_TRIM 1

/* Define to 1 if you have the <maxminddb.h> header file. */
/* #undef HAVE_MAXMINDDB_H */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* mysql_library_init available */
#define HAVE_MYSQL_LIBRARY_INIT 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <net-snmp/net-snmp-config.h> header file. */
#define HAVE_NET_SNMP_NET_SNMP_CONFIG_H 1

/* Define to 1 if the system has the type `off64_t'. */
#define HAVE_OFF64_T 1

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the `prctl' function. */
#define HAVE_PRCTL 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Set-kind available for rwlock attr. */
#define HAVE_PTHREAD_RWLOCKATTR_SETKIND_NP 1

/* Can set thread-name. */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Can set thread scheduling parameters */
#define HAVE_PTHREAD_SETSCHEDPARAM 1

/* Define to 1 if you have the `recvmmsg' function. */
#define HAVE_RECVMMSG 1

/* Define to 1 if you have the `regcomp' function. */
#define HAVE_REGCOMP 1

/* Define to 1 if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* Define to 1 if you have the `sched_get_priority_max' function. */
#define HAVE_SCHED_GET_PRIORITY_MAX 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* set define */
#define HAVE_SCM_CREDENTIALS 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the <semaphore.h> header file. */
#define HAVE_SEMAPHORE_H 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* set define */
#define HAVE_SO_TIMESTAMP 1

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
/* #undef HAVE_STAT_EMPTY_STRING_BUG */

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if `sa_len' is member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if you have the `syscall' function. */
#define HAVE_SYSCALL 1

/* set define */
#define HAVE_SYSINFO_UPTIME 1

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/inotify.h> header file. */
#define HAVE_SYS_INOTIFY_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
#define HAVE_SYS_PRCTL_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* set define */
#define HAVE_SYS_gettid 1

/* Define to 1 if you have the `ttyname_r' function. */
#define HAVE_TTYNAME_R 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if `fork' works. */
#define HAVE_WORKING_FORK 1

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* the host environment, can be queried via a system variable */
#define HOSTENV "x86_64-redhat-linux-gnu"

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define with a value if your <sys/param.h> does not define MAXHOSTNAMELEN */
/* #undef MAXHOSTNAMELEN */

/* Defined if memcheck support settings are to be enabled (e.g. prevents
   dlclose()). */
/* #undef MEMCHECK */

/* Defined if debug mode is disabled. */
#define NDEBUG 1

/* Indicator for a AIX OS */
/* #undef OS_AIX */

/* Indicator for a BSD OS */
/* #undef OS_BSD */

/* Indicator for a Linux OS */
#define OS_LINUX 1

/* Indicator for a Solaris OS */
/* #undef OS_SOLARIS */

/* Name of package */
#define PACKAGE "rsyslog"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "rsyslog@lists.adiscon.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "rsyslog"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rsyslog 8.25.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rsyslog"

/* Define to the version of this package. */
#define PACKAGE_VERSION "8.25.1"

/* platform id for display purposes */
#define PLATFORM_ID "x86_64-redhat-linux-gnu"

/* platform id for display purposes */
#define PLATFORM_ID_LSB ""

/* default port for omrelp */
#define RELP_DFLT_PT "514"

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Defined if runtime instrumentation mode is enabled. */
/* #undef RTINST */

/* Define to the type of arg 1 for `select'. */
#define SELECT_TYPE_ARG1 int

/* Define to the type of args 2, 3 and 4 for `select'. */
#define SELECT_TYPE_ARG234 (fd_set *)

/* Define to the type of arg 5 for `select'. */
#define SELECT_TYPE_ARG5 (struct timeval *)

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* network support is integrated. */
#define SYSLOG_INET 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define if you want to use GSSAPI */
/* #undef USE_GSSAPI */

/* Define if you want to enable libuuid support */
#define USE_LIBUUID 1

/* Multithreading support enabled. */
#define USE_PTHREADS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* If defined, the select() syscall won't be limited to a particular number of
   file descriptors. */
#define USE_UNLIMITED_SELECT 1

/* Defined if valgrind support settings are to be enabled (e.g. prevents
   dlclose()). */
/* #undef VALGRIND */

/* Version number of package */
#define VERSION "8.25.1"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Use POSIX pthread semantics */
#define _POSIX_PTHREAD_SEMANTICS 1

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Use X/Open CAE Specification */
/* #undef _XOPEN_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
/* #undef volatile */
