#include<stdio.h>
#include<stdlib.h>
main()
{
	
	double a,b;
	long int c;
	scanf("%lf",&a);
	c=int(a);
	b=a-c;
	printf("The input value is %lf\n",a);
	printf("The whole part is %ld\n",c);
	printf("The decimal fraction part is %lf",b);
	
	
	
	
	
	return 0;
}
