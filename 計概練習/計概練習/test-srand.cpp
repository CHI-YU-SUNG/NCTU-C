#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int i,num1,num2,num3;
	for(i=1;i<=5;i++)
	{
		num1=rand()%6+1;
		num2=rand()%6+1;
		num3=rand()%6+1;
		printf("num1=%d num2=%d num3=%d\n",num1,num2,num3);
	}
	
	return 0;
}
