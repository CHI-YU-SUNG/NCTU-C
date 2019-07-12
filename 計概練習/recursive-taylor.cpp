#include<stdio.h>
#include<conio.h>
double x;
int main()
{
	double taylor(double );
	double s;
	do{
		printf("please enter a real number > 1:");
		scanf("%lf",&x);
	}
	while(x<=1);
	s=taylor(1/x);
	printf("sum = %9.7lf",s);
	return 0;
}
double taylor(double t)
{
	if(t<1e-5)
		return 0;
	else
		return (taylor(t/x)+t);
}
