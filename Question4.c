#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

void main()
{
	pid_t pid1;
	pid1=fork();
	if(pid1==0)
	{
		execl("/home/pratik/linux/wait","./wait",NULL);
	}
	else
	{
		wait(NULL);
		printf("child complete");
		exit(0);
}



}
