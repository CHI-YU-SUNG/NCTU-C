#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	{
	
	double sum=1,d=1;
	int i=0;	
	
			while(d>=1e-06)
			{
				++i;
				d/=i;
				sum+=d;
			}
	
		printf("e=%lf\n",sum);
	}
	
	{
	
	double p=0,d=1,sum=1;
	int i=0;
			
			
			
				while(fabs(d-p)>=1e-03)
				{
					
					++i;
					p*=(i-1);
					d/=i;
					sum+=d;
				}
				
			printf("e = %lf",sum);
	}
	
return 0;

}
