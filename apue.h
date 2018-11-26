#ifndef _APUE_H
	#define _APUE_H

	#define _POSIX_C_SOURCE 200809L
	//=========Solaris 10==========
	#if defined(SOLARIS)
		#define _XOPEN_SOURCE 600
	#else
		#define _XOPEN_SOURCE 700
	#endif
	//=============================
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <sys/termios.h>
	//=============================
	#if define(MACOS) || !defined(TIOCGWINSZ)
		#include <sys/ioctl.h>
	#endif
	//=============================
	#include <stdio.h>
	#include <stdlib.h>
	#include <stddef.h>
	#include <string.h>
	#include <unistd.h>
	#include <signal.h>
	//=============================
	#define MAXLINE 4096
	#define FILE_MODE (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)
	#define DIR_MODE (FILE_MODE | S_IXUSR | S_IXGRP | S_IXOTH)
	//=============================
	typedef void Sigfunc(int);
	#define min(a,b) ((a)<(b) ? (a):(b))
	#define max(a,b) ((a)>(b) ? (a):(b))
	//=============================
	char *path_alloc(size_t);
	long open_max(void);
	int set_cloexec(int);
	void clr_fl(int,int);
	void set_fl(int,int);
	void pr_exit(int);
	void pr_mask(const char *);


	






#endif /* _APUE_H */
