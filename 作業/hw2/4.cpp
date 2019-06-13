#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float r=6.75,PI=3.14159;
	printf("radius: ");
	scanf("%f,%f",&r,&PI);
	printf("diameter: %10.5f\n",r*2);
	printf("circumference: %10.5f\n",r*2*PI);
	printf("area: %f",r*r*PI);
	
	
	return 0;
 } 
