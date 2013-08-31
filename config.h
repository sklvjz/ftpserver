/* config.h.  Generated by configure.  */
/* config.hin.  Generated from configure.ac by autoheader.  */

#include <features.h>
#include <config/autoconf.h>

/* Define to one if you want authentication. */
/* #undef AUTHENTICATION */

/* Define to 1 if the `closedir' function returns void instead of `int'. */
/* #undef CLOSEDIR_VOID */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* FIXME */
/* #undef DES_ENCRYPTION */

/* Define to one if you want encryption. */
/* #undef ENCRYPTION */

/* 1 */
/* #undef EWOULDBLOCK */

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define if you have weak "assembler" references */
/* #undef HAVE_ASM_WEAK_REFS */

/* Define if you have weak "attribute" references */
/* #undef HAVE_ATTR_WEAK_REFS */

/* Define to 1 if you have the `bcmp' function. */
#define HAVE_BCMP 1

/* Define to 1 if you have the `bcopy' function. */
#define HAVE_BCOPY 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define to 1 if the system has the type `cc_t'. */
#define HAVE_CC_T 1

/* Define to 1 if you have the `cfsetspeed' function. */
#define HAVE_CFSETSPEED 1

/* Define to 1 if you have the `cgetent' function. */
/* #undef HAVE_CGETENT */

/* Define to 1 if you have the `crypt' function. */
#define HAVE_CRYPT 1

/* Define to 1 if you have the declaration of `crypt', and to 0 if you don't.
   */
#define HAVE_DECL_CRYPT 1

/* Define to 1 if you have the declaration of `environ', and to 0 if you
   don't. */
#define HAVE_DECL_ENVIRON 0

/* Define to 1 if you have the declaration of `errno', and to 0 if you don't.
   */
#define HAVE_DECL_ERRNO 1

/* Define to 1 if you have the declaration of `fclose', and to 0 if you don't.
   */
#define HAVE_DECL_FCLOSE 1

/* Define to 1 if you have the declaration of `getcwd', and to 0 if you don't.
   */
#define HAVE_DECL_GETCWD 1

/* Define to 1 if you have the declaration of `getgrnam', and to 0 if you
   don't. */
#define HAVE_DECL_GETGRNAM 1

/* Define to 1 if you have the declaration of `getlogin', and to 0 if you
   don't. */
#define HAVE_DECL_GETLOGIN 1

/* Define to 1 if you have the declaration of `getpass', and to 0 if you
   don't. */
#define HAVE_DECL_GETPASS 1

/* Define to 1 if you have the declaration of `getusershell', and to 0 if you
   don't. */
#define HAVE_DECL_GETUSERSHELL 1

/* Define to 1 if you have the declaration of `htons', and to 0 if you don't.
   */
#define HAVE_DECL_HTONS 1

/* Define to 1 if you have the declaration of `initgroups', and to 0 if you
   don't. */
#define HAVE_DECL_INITGROUPS 1

/* Define to 1 if you have the declaration of `pclose', and to 0 if you don't.
   */
#define HAVE_DECL_PCLOSE 1

/* Define to 1 if you have the declaration of `strchr', and to 0 if you don't.
   */
#define HAVE_DECL_STRCHR 1

/* Define to 1 if you have the declaration of `strerror', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR 1

/* Define to 1 if you have the declaration of `ttyname', and to 0 if you
   don't. */
#define HAVE_DECL_TTYNAME 1

/* Define to 1 if you have the <des.h> header file. */
/* #undef HAVE_DES_H */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* FIXME */
#define HAVE_EWOULDBLOCK 1

/* Define to 1 if you have the `fchdir' function. */
#define HAVE_FCHDIR 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* FIXME */
#define HAVE_FD_SET_MACROS 1

/* FIXME */
/* #undef HAVE_FD_SET_MACROS_IN_SYS_TIME_H */

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `fork' function. */
//#define HAVE_FORK 1

/* Define to 1 if you have the `forkpty' function. */
#define HAVE_FORKPTY 1

/* Define to 1 if you have the `fpathconf' function. */
#define HAVE_FPATHCONF 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getmsg' function. */
#define HAVE_GETMSG 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpass' function. */
#define HAVE_GETPASS 1

/* Define to 1 if you have the `getspnam' function. */
#if defined(CONFIG_USER_TINYLOGIN_SHADOWPASSWDS) || defined(CONFIG_USER_SHADOW_UTILS)
#define HAVE_GETSPNAM 1
#else
#undef HAVE_GETSPNAM
#endif


/* Define to 1 if you have the `getusershell' function. */
#ifdef __uClinux__
#undef HAVE_GETUSERSHELL
#else
#define HAVE_GETUSERSHELL 1
#endif

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the `herror' function. */
#define HAVE_HERROR 1

/* Define to one if you have hstrerror. */
#define HAVE_HSTRERROR 1

/* Define to one if you have h_errno. */
#define HAVE_H_ERRNO 1

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the `initsetproctitle' function. */
/* #undef HAVE_INITSETPROCTITLE */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `iruserok' function. */
#define HAVE_IRUSEROK 1

/* Define to 1 if you have the `killpg' function. */
#define HAVE_KILLPG 1

/* Define to 1 if you have the <krb.h> header file. */
/* #undef HAVE_KRB_H */

/* Define to 1 if you have the `bsd' library (-lbsd). */
/* #undef HAVE_LIBBSD */

/* Define to 1 if you have the `dl' library (-ldl). */
/* #undef HAVE_LIBDL */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `opie' library (-lopie). */
/* #undef HAVE_LIBOPIE */

/* Define to one if you have -lreadline */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the `resolv' library (-lresolv). */
#define HAVE_LIBRESOLV 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the `z' library (-lz). */
#define HAVE_LIBZ 1

/* Define to 1 if you have the `login' function. */
#define HAVE_LOGIN 1

/* Define to 1 if you have the `login_tty' function. */
#define HAVE_LOGIN_TTY 1

/* Define to 1 if you have the `logout' function. */
#define HAVE_LOGOUT 1

/* Define to 1 if you have the `logwtmp' function. */
//#define HAVE_LOGWTMP 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `memcmp' function. */
#define HAVE_MEMCMP 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netinet/in_systm.h> header file. */
#define HAVE_NETINET_IN_SYSTM_H 1

/* Define to 1 if you have the <netinet/ip.h> header file. */
#define HAVE_NETINET_IP_H 1

/* Define to 1 if you have the <netinet/ip_icmp.h> header file. */
#define HAVE_NETINET_IP_ICMP_H 1

/* Define to 1 if you have the <netinet/ip_var.h> header file. */
/* #undef HAVE_NETINET_IP_VAR_H */

/* Define to 1 if you have the `openpty' function. */
#ifndef __UC_LIBC__
#define HAVE_OPENPTY 1
#endif

/* Define to one if you have <osockaddr.h>. */
/* #undef HAVE_OSOCKADDR_H */

/* Define if you have the <paths.h> header file */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to one if you have <poll.h> */
/* #undef HAVE_POLL_H */

/* Define if you have weak "pragma" references */
#define HAVE_PRAGMA_WEAK_REFS 1

/* Define to 1 if you have the `ptsname' function. */
#define HAVE_PTSNAME 1

/* Define to 1 if you have the `revoke' function. */
/* #undef HAVE_REVOKE */

/* Define to 1 if you have the `ruserok' function. */
#define HAVE_RUSEROK 1

/* Define to 1 if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the `setpgid' function. */
#define HAVE_SETPGID 1

/* Define to 1 if you have the `setproctitle' function. */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `setregid' function. */
#define HAVE_SETREGID 1

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setreuid' function. */
#define HAVE_SETREUID 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `setutent_r' function. */
/* #undef HAVE_SETUTENT_R */

/* Define to 1 if you have the <shadow.h> header file. */
#if defined(CONFIG_USER_TINYLOGIN_SHADOWPASSWDS) || defined(CONFIG_USER_SHADOW_UTILS)
#define HAVE_SHADOW_H 1
#else
#undef HAVE_SHADOW_H
#endif

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigvec' function. */
#define HAVE_SIGVEC 1

/* Define to 1 if the system has the type `sig_t'. */
#define HAVE_SIG_T 1

/* Define to one if you have snprintf */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* FIXME */
/* #undef HAVE_STREAMSPTY */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <stropts.h> header file. */
#define HAVE_STROPTS_H 1

/* Define to 1 if you have the `strsignal' function. */
#ifdef __uClinux__
#undef HAVE_STRSIGNAL
#else
#define HAVE_STRSIGNAL 1
#endif

/* Define to 1 if `h_addr_list' is member of `struct hostent'. */
#define HAVE_STRUCT_HOSTENT_H_ADDR_LIST 1

/* Define to 1 if `ifr_broadaddr' is member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_BROADADDR 1

/* Define to 1 if `ifr_netmask' is member of `struct ifreq'. */
#define HAVE_STRUCT_IFREQ_IFR_NETMASK 1

/* Define to 1 if the system has the type `struct if_nameindex'. */
#define HAVE_STRUCT_IF_NAMEINDEX 1

/* Define to 1 if the system has the type `struct lastlog'. */
#define HAVE_STRUCT_LASTLOG 1

/* Define to 1 if `sin_len' is member of `struct sockaddr_in'. */
/* #undef HAVE_STRUCT_SOCKADDR_IN_SIN_LEN */

/* Define to 1 if `sa_len' is member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if `st_blksize' is member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `ut_tv' is member of `struct utmpx'. */
#define HAVE_STRUCT_UTMPX_UT_TV 1

/* Define to 1 if `ut_exit' is member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_EXIT 1

/* Define to 1 if `ut_host' is member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_HOST 1

/* Define to 1 if `ut_id' is member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_ID 1

/* Define to 1 if `ut_pid' is member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_PID 1

/* Define to 1 if `ut_tv' is member of `struct utmp'. */
#ifdef __uClinux__
#undef HAVE_STRUCT_UTMP_UT_TV
#else
#define HAVE_STRUCT_UTMP_UT_TV 1
#endif

/* Define to 1 if `ut_name' is member of `struct utmp'. */
#ifdef __uClinux__
#undef HAVE_STRUCT_UTMP_UT_NAME
#else
#define HAVE_STRUCT_UTMP_UT_NAME 1
#endif

/* Define to 1 if `ut_type' is member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_TYPE 1

/* Define to 1 if `ut_user' is member of `struct utmp'. */
#define HAVE_STRUCT_UTMP_UT_USER 1

/* Define to 1 if `ifr_index' is member of `stuct ifreq'. */
/* #undef HAVE_STUCT_IFREQ_IFR_INDEX */

/* FIXME */
#define HAVE_SYSLOG_INTERNAL 1

/* Define to 1 if you have the 'vsyslog' function. */
#ifdef __uClinux__
#undef HAVE_VSYSLOG
#else
#define HAVE_VSYSLOG 1
#endif

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to one if you have sys_errlist. */
/* #undef HAVE_SYS_ERRLIST */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl_compat.h> header file. */
/* #undef HAVE_SYS_IOCTL_COMPAT_H */

/* Define to 1 if you have the <sys/mkdev.h> header file. */
/* #undef HAVE_SYS_MKDEV_H */

/* Define to 1 if you have the <sys/msgbuf.h> header file. */
/* #undef HAVE_SYS_MSGBUF_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/proc.h> header file. */
/* #undef HAVE_SYS_PROC_H */

/* Define to 1 if you have the <sys/ptyvar.h> header file. */
/* #undef HAVE_SYS_PTYVAR_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stream.h> header file. */
/* #undef HAVE_SYS_STREAM_H */

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/tty.h> header file. */
/* #undef HAVE_SYS_TTY_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the <tcpd.h> header file. */
/* #undef HAVE_TCPD_H */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `updwtmp' function. */
//#define HAVE_UPDWTMP 1

/* Define to 1 if you have the `updwtmpx' function. */
//#define HAVE_UPDWTMPX 1

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define HAVE_UTMP_H 1

/* Define to 1 if you have the `vfork' function. */
#define HAVE_VFORK 1

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vhangup' function. */
#define HAVE_VHANGUP 1

/* Define to 1 if you have the <vis.h> header file. */
/* #undef HAVE_VIS_H */

/* FIXME */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the `wait3' function. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the `wait4' function. */
#define HAVE_WAIT4 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* 1 */
#define HAVE_WEAK_REFS 1

/* Define to 1 if `fork' works. */
#ifdef __uClinux__
#undef HAVE_WORKING_FORK
#else
#define HAVE_WORKING_FORK 1
#endif

/* Define to 1 if `vfork' works. */
#define HAVE_WORKING_VFORK 1

/* FIXME */
#define HAVE___P 1

/* Define to one if you have __progname */
#ifdef __UC_LIBC__
#undef HAVE___PROGNAME
#else
#define HAVE___PROGNAME 1
#endif

/* Define to one if you have 'daemon' function */
#ifdef __uClinux__
#undef HAVE_DAEMON
#else
#define HAVE_DAEMON 1
#endif

/* Define to one if you have Kerberos */
/* #undef KERBEROS */

/* Define to one if you have Kerberos IV */
/* #undef KERBEROS_IV */

/* FIXME */
/* #undef KERBEROS_V */

/* Define to one if you have Kerberos IV */
/* #undef KRB4 */

/* Name of package */
#define PACKAGE "inetutils"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-inetutils@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU inetutils"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU inetutils 1.4.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "inetutils"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4.1"

/* Define if compiler has function prototypes */
#define PROTOTYPES 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* FIXME */
/* #undef SEEK_CUR */

/* FIXME */
/* #undef SEEK_END */

/* FIXME */
/* #undef SEEK_SET */

/* Define to 1 if the `setvbuf' function takes the buffering type as its
   second argument and the buffer pointer as the third, as on System V before
   release 3. */
/* #undef SETVBUF_REVERSED */

/* FIXME */
/* #undef SOLARIS */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
        STACK_DIRECTION > 0 => grows toward higher addresses
        STACK_DIRECTION < 0 => grows toward lower addresses
        STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* FIXME */
/* #undef STDERR_FILENO */

/* FIXME */
/* #undef STDIN_FILENO */

/* FIXME */
/* #undef STDOUT_FILENO */

/* Define to 1 if `sys_siglist' is declared by <signal.h> or <unistd.h>. */
#define SYS_SIGLIST_DECLARED 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* FIXME */
/* #undef UTMPX */

/* Version number of package */
#define VERSION "1.4.1"

/* Define to one if you have -lls */
/* #undef WITH_LIBLS */

/* Define to one if you have -lpam. */
/* #undef WITH_PAM */

/* Define to one if you have -lwrap. */
/* #undef WITH_WRAP */

/* Define to 1 if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* FIXME */
/* #undef sa_family_t */

/* Define to `setpgrp' if you don't have `setpgid'. */
/* #undef setpgid */

/* FIXME */
/* #undef sig_atomic_t */

/* FIXME */
/* #undef sigset_t */

/* Define as `fork' if `vfork' does not work. */
/* #undef vfork */

#ifdef HAVE___P
/* The system defines __P; we tested for it in <sys/cdefs.h>, so include that
   if we can.  */
# ifdef HAVE_SYS_CDEFS_H
#  include <sys/cdefs.h>
# endif
#else /* !HAVE___P */
/* If the system includes don't seem to define __P, do it here instead.  */
# if defined (__GNUC__) || (defined (__STDC__) && __STDC__) || defined (__cplusplus)
#  define	__P(args)	args	/* Use prototypes.  */
#else
#  define	__P(args)	()	/* No prototypes.  */
#endif
#endif /* HAVE___P */

#ifndef HAVE_VSNPRINTF
#include <sys/types.h>
#if defined(HAVE_STDARG_H) && defined(__STDC__) && __STDC__
#include <stdarg.h>
#else
#include <varargs.h>
#endif
extern int vsnprintf __P ((char *, size_t, const char *, va_list));
#endif

#if !defined(HAVE_DECL_HSTRERROR) || !HAVE_DECL_HSTRERROR
extern const char *hstrerror __P ((int));
#endif

#if !HAVE_DECL_GETLOGIN
extern char *getlogin __P((void));
#endif

#if !HAVE_DECL_GETCWD
extern char *getcwd __P((char *, size_t));
#endif

#if !HAVE_DECL_GETPASS
extern char *getpass __P((const char *));
#endif

#if !HAVE_DECL_TTYNAME
extern char *ttyname __P ((int));
#endif

#if !HAVE_DECL_STRERROR
extern const char *strerror __P ((int));
#endif

#if !HAVE_DECL_STRCHR
extern char *strchr __P ((char *str, int ch));
extern char *strrchr __P ((char *str, int ch));
#endif
#ifndef HAVE_STRCHR
#define strchr index
#define strrchr rindex
#endif

#ifndef HAVE_DECl_GETGRNAM
extern struct group *getgrnam __P ((const char *));
#endif

/* Defaults for PATH_ variables.  */
#include <confpaths.h>

#ifndef HAVE_SIG_T
typedef RETSIGTYPE (*sig_t) ();
#endif

#ifdef HAVE_SYS_PARAM_H
#include <sys/types.h>
#include <sys/param.h>
#endif
/* Get or fake the disk device blocksize.
   Usually defined by sys/param.h (if at all).  */
#if !defined(DEV_BSIZE) && defined(BSIZE)
#define DEV_BSIZE BSIZE
#endif
#if !defined(DEV_BSIZE) && defined(BBSIZE) /* SGI */
#define DEV_BSIZE BBSIZE
#endif
#ifndef DEV_BSIZE
#define DEV_BSIZE 4096
#endif

/* Extract or fake data from a `struct stat'.
   ST_BLKSIZE: Optimal I/O blocksize for the file, in bytes. */
#ifndef HAVE_STRUCT_STAT_ST_BLKSIZE
# define ST_BLKSIZE(statbuf) DEV_BSIZE
#else /* HAVE_STRUCT_STAT_ST_BLKSIZE */
/* Some systems, like Sequents, return st_blksize of 0 on pipes. */
# define ST_BLKSIZE(statbuf) ((statbuf).st_blksize > 0 \
                              ? (statbuf).st_blksize : DEV_BSIZE)
#endif /* HAVE_STRUCT_STAT_ST_BLKSIZE */

#ifndef HAVE_BCOPY
#define bcopy(f,t,z) memmove(t,f,z)
#endif

#ifndef HAVE_BZERO
#define bzero(x,z) memset(x,0,z)
#endif

#ifndef HAVE_MEMCPY
#define memcpy memmove
#endif

#if !defined(HAVE_MEMMOVE) || !defined(HAVE_MEMSET)
/* Make sure size_t is defined */
#include <sys/types.h>
#endif

#ifndef HAVE_MEMMOVE
/* Declare our own silly version.  */
extern void *memmove __P ((void *to, const void *from, size_t sz));
#endif

#ifndef HAVE_MEMSET
/* Declare our own silly version.  */
extern void memset __P ((void *mem, int val, size_t sz));
#endif
