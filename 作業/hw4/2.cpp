#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("¼g¥X £k/4ªº­È");
	float sum=0,i,s=1;
	i=1;
	while(i<1E06)
	{
		sum+=(1/i)*s;
		s*=-1;
		i+=2;
	}
	
	
	printf(" £k/4=1-1/3+1/5-1/7+1/9....= %f",sum);
	
	return 0;	
}
