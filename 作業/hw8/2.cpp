#include<stdio.h>
#include<stdlib.h>
int main()
{
	float Evalpoly(float,float,float,float); 
	float a,b,c,d,x;
	printf("���Ʀ�a*x*x+b*x+c\n");
	printf("���O��Ja b c x\n");
	scanf("%f %f %f %f",&a,&b,&c,&x);
	printf("answer: %f",Evalpoly(a,b,c,x));
	
	
	return 0;
}

float Evalpoly(float a,float b,float c,float x)
{
	float result;
	result=a*x*x+b*x+c;
	return result;
}
