#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Two number are %d %d\n",a,b);
	printf("sum: %d\n",a+b);
	printf("product: %d\n",a*b);
	printf("difference: %d\n",a-b);
	printf("quotient: %d",a/b);
	
	float f1,f2;
	scanf("%f %f",&f1,&f2);
	printf("Two number are %f %f\n",f1,f2);
	printf("sum: %f\n",f1+f2);
	printf("product: %f\n",f1*f2);
	printf("difference: %f\n",f1-f2);
	printf("quotient: %f",f1/f2);
	
	double d1,d2;
	scanf("%lf %lf",&d1,&d2);
	printf("Two number are %lf %lf\n",d1,d2);
	printf("sum: %lf\n",d1+d2);
	printf("product: %lf\n",d1*d2);
	printf("difference: %lf\n",d1-d2);
	printf("quotient: %lf",d1/d2);
	
	int i1;
	float i2;
	scanf("%d %f",&i1,&i2);
	printf("Two number are %d %f\n",i1,i2);
	printf("sum: %f\n",i1+i2);
	printf("product: %f\n",i1*i2);
	printf("difference: %f\n",i1-i2);
	printf("quotient: %f\n",i1/i2);
	
	return 0;
}
