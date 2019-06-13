#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch1,ch2;
	int i;
	printf("ASCII chart\n");
	printf("characters	codes	characters	codes\n");
	for(i=33;i<=126;i+=2)
	{
	ch1=i;
	ch2=i+1;
	printf("% 10c % 10d % 10c % 10d \n",ch1,ch1,ch2,ch2);
	}
	
	
	
	return 0;	
}
