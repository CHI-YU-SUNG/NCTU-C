#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Please write a five digit number: ");
	scanf("%d",&a);
	b=a%10+(a/10%10)+(a/100%10)+(a/1000%10)+(a/10000%10);
	printf("The sum of five digits: %d\n",b);
	printf("The number add 11111: %d",a+11111);
	
	
	
	//system("pause");
	
	//return 0;
 } 
