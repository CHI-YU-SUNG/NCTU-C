#include<stdio.h>
#include<conio.h>

int main()
{
	int a,x,y,z;
	char b=',';
//3-a
printf("3-a\n");
		printf("please enter an integer a between 7 and 9 digits \n");
		scanf("%d",&a);
		printf("The third-rightmost digit of the input data is %d\n\n\n",(a/100)%10);
//3-b
printf("3-b\n");
		scanf("%d",&a);
	x=(a/1000000)%1000;
	y=(a/1000)%1000;
	z=a%1000;
		printf("The input data with commas between every third digit is:\n");
		printf("%d,",x);
		printf("%d,",y);
		printf("%d",z);
	getch();
	return 0;
}
