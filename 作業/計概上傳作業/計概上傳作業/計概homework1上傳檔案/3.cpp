#include<stdio.h> 
#include<conio.h>

int main()
{
printf("3-a\n");
	int a;
		printf("please input a five-digits unsigned integer:\n\n");
		
		scanf("%d",&a);
		printf("and the sum of its digits is=%d\n\n\n",a/10000+a/1000%10+a/100%10+a/10%10+a%10);

printf("3-b\n");
		printf("please input a five-digits unsigned integer a:\n");
		
		scanf("%d",&a);
		printf("a new number is=%d",a+1*10000+1*1000+1*100+1*10+1);

	getch();
	return 0;
}
