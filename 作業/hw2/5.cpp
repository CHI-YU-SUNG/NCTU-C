#include<stdio.h>
#include<stdlib.h>
int main()
{
	double r,r1,r2,r3,r4,r5;
	printf("five parallel resistances is given by: \n");
	scanf("%lf %lf %lf %lf %lf",&r1,&r2,&r3,&r4,&r5);
	r=1/((1/r1)+(1/r2)+(1/r3)+(1/r4)+(1/r5));
	printf("resistance:%lf",r);
	
	return 0;
}
