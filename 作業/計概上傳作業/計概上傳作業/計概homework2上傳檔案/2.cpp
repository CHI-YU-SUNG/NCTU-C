#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
//case 1
		printf("case 1\n");
		printf("please enter two numbers a and b:\n"); 
		scanf("%d %d",&a,&b);
		printf("the sum of a and b is=%d\n",a+b);
		printf("the product of a and b is=%d\n",a*b);
		printf("the difference of a and b is=%d\n",a-b);
		printf("the quotient of a and b is=%d\n\n",a/b);
//case 2
	float x,y;
		printf("case 2\n");
		printf("please enter two numbers x and y:\n");
		scanf("%f %f",&x,&y);
		printf("the sum of x and y is=%f\n\n",x+y);
		printf("the product of x and y is=%f\n",x*y);
		printf("the difference of x and y is=%f\n",x-y);
		printf("the quotient of x and y is=%f\n\n",x/y);
//case 3
	double m,n;
		printf("case 3\n");
		printf("please enter two numbers m and n:\n");
		scanf("%lg %lg",&m,&n);
		printf("the sum of m and n is=%lg\n",m+n);
		printf("the product of m and n is=%lg\n",m*n);
		printf("the difference of m and n is=%lg\n",m-n);
		printf("the quotient of m and n is=%lg\n\n",m/n);
//case 4
	int s;
	float t;
		printf("case 4\n");
		printf("please enter two numbers s and t:\n");
		scanf("%d %f",&s,&t);
		printf("the sum of s and t is=%lg\n",s+t);
		printf("the product of s and t is=%lg\n",s*t);
		printf("the difference of s and t is=%lg\n",s-t);
		printf("the quotient of s and t is=%f\n",s/t);
	getch();
	return 0;
}
