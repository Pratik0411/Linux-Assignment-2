#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

pthread_t tid1,tid2;;

void* thread1(void *arg)
{
	for(int i=0;i<5;i++)
	{
		printf("newly created thread1 is executing\n");
	}
	return NULL;
}

void* thread2(void *arg)
{
	for(int i=0;i<5;i++)
	{
		printf("newly created thread2 is executing\n");
	}
	return NULL;
}

int main()
{
	int ret=pthread_create(&tid1,NULL,thread1,NULL);
	pthread_create(&tid2,NULL,thread2,(void *)&tid2);
	if(ret)
		printf("thread is not created\n");
	else
		printf("thread is created\n");
	
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	
return 0;
}
