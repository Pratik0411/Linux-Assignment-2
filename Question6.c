#include<stdio.h>

void callback1(void)
{
	printf("callback1 called\n");
}

void callback2(void)
{
	printf("callback2 called\n");
}

void callback3(void)
{
	printf("callback3 called\n");
}

void main()
{
	printf("registering callback1\n");
	atexit(callback1);
	
	printf("registering callback2\n");
	atexit(callback2);
	
	printf("registering callback3\n");
	atexit(callback3);
	
	printf("exiting main\n");
	exit(0);
}
