#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("executing an ls program");
	execl("/bin/ls","ls","-lh",0);
	
	printf("i executed ls program");
	printf("i executed ls program");
	printf("i executed ls program");
	return 0;
}
