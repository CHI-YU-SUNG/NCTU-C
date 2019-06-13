#include<stdio.h>
#include<stdlib.h>
int main()
{
	double round(double,int);
	double x,result;
	int place;
	scanf("%lf %d",&x,&place);
	result=round(x,place);
	
	printf("%lf round %d is %lf",x,place,result);
	
	return 0;
}
double round(double x,int place)
{
	double result=1;
	int i;
	i=1;
	while(i<=place)
	{
		x*=10;
		i++;
	}
	result=x+0.5;
	
	result=(int)result;
	i=1;
	while(i<=place)
	{
		result/=10.;
		i++;
	}
	return result;
}




