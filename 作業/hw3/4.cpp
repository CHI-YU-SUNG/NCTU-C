#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("a小題\n");
	float v1,f1,f2;
	printf("利用都卜勒效應求f1頻率為20000004000時的速度\n");
	scanf("%f1,%f2",&f1,&f2);
	v1=6.685E10*(20000004000-2e10)/(20000004000+2e100);
	printf("速度= %f\n",v1);
	
	printf("b小題\n");
	float v2,f3;
	printf("試求55 miles時的頻率");
	f3=2e10*(1+(55./6.685e10))/(1-(55./6.685e10));
	printf("頻率%f",f3);
	
	
	return 0;
}

 
