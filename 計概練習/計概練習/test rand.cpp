#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,num1,num2;
	for(i=1;i<=2;i++)
	{
		num1=rand()%6+1;
		num2=rand()%6+1;
		printf("num1=%d num2=%d\n",num1,num2);
	}
	
	return 0;
}
