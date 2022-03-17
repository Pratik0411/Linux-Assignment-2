#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int fd;
void* data(void *p);
int main()
{
	pthread_t thread;
	fd=open("/etc/passwd",O_RDONLY);

	pthread_create(&thread,NULL,data,"thread one");
	pthread_join(thread,NULL);
	
	return 0;
}

void* data(void *p)
{
	char *str,buf[100];
	int n,pid;
	str=(char *)p;
	pid=getpid();
	printf("%s: \t started now: \t for process %d \n\n",str,pid);
	
	n=read(fd,buf,100);
	printf("%s: \t read: \t %d \n\n",str,pid);
	printf("\n*************\n");
	write(1,buf,100);
	printf("\n*******************\n");
	sleep(3);
	printf("\n%s: \t finished: \t process id:  %d \n",buf,pid);
}
