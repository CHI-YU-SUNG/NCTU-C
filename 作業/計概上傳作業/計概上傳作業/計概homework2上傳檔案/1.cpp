#include<stdio.h>
#include<conio.h>

int main()
{

	double a;
	int b;
		printf("please enter a number:\n");
		scanf("%lf",&a);
		printf("the input value is=%lf\n",a);
		printf("the whole part is=%d\n",b=10*a/10);
		printf("the decimal(fraction) part is=%lf\n",a-b);
		
	getch();
	return 0;
}
