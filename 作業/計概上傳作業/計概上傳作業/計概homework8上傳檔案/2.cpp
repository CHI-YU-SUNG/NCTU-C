#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	float a,b,c,x,result=1;
	float evalpoly(float,float,float,float);
	printf("Please input a,b,c,x to calculate:a*x^2+b*x+c\n");
	scanf("%f %f %f %f",&a,&b,&c,&x); 
	result=evalpoly(a,b,c,x);
	printf("%f",result);
	return 0;
} 
float evalpoly(float a,float b,float c,float x)
{
	float result=1;
	result=a*x*x+b*x+c;
	return (result);
}
