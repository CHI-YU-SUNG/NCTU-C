#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int x,result;
	int isprime(int x);
	printf("Please enter a number x\n");
	scanf("%d",&x);
	result=isprime(x);
	printf("%d",result);
	return 0;
}
int isprime(int x)
{
	int i,count=0;
	for(i=2;i<=x/2;i++)
	{
		x%i==0?count=1:NULL;
	}
	if(count==0)
		return (1);
	else
		return (0);
}
