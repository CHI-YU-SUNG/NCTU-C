#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c,d,e,f;
	printf("six real numbers: ");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	printf("answer: x= %f\n",(c*e-b*f)/(a*e-b*d));
	printf("answer: y= %f",(a*f-c*d)+(a*e-b*d));
	
	return 0;
}
