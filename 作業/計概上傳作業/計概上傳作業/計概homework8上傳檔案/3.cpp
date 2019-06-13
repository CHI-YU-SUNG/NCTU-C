#include<stdio.h>
int main()
{
	double x,result=1;
	int place;
	double round(double,int);
	scanf("%lf %d",&x,&place);
	result=round(x,place);
	printf("result is = %lf",result);
	return 0;
} 
double round(double x,int place)
{
	double result=1;
	int i;
	for(i=1;i<=place;i++)
		x*=10;
	x+=0.5;
	printf("%lf\n",x);
	x=(int)x;
	for(i=1;i<=place;i++)
		x/=10.;
	result=x;
	return (result);
}
