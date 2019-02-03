#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/wait.h>

#define MAXLINE 1024

int main()
{
	char result_buf[MAXLINE], command[MAXLINE];
	int rc = 0;
	FILE *fp;

	snprintf(command,sizeof(command), "vim afile");

	fp = popen(command, "r");
	if(NULL==fp)
	{
		perror("failed");
		exit(1);
	}

	rc = pclose(fp);
	printf("%d",rc);
	printf("%d",WEXITSTATUS(rc));

	return 0;
}

