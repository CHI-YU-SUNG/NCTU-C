#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
	int die[6]={0};
	int times,n;
	srand(time(NULL));
	for(int i=1;i<=100;i++){
		times=rand()%6;
		die[times]++;
	}
	for(int num=1;num<=6;num++){
		printf("%d. :",num);
		for(int n=0;n<die[num-1];n++)
			printf("*");
		printf("\n");
	}
	return 0;
}
