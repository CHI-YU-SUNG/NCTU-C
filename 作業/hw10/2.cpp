#include<stdio.h>
#include<stdlib.h>
int main()
{
	double pow(double,double);
	double x,y;
	scanf("%lf %lf",&x,&y);
	printf("x^y= %lf",pow(x,y));
	
	return 0;
 } 
 
double pow(double x,double y)
{
	if (y>=0)
		{
			if(y==0)
				return 0;
			else if(y==1){
				return x;}
			else {
				return (x*pow(x,y-1));}
		}
	else if(y<0)
			return (1./(pow(x,-y)));
}
