#include<stdio.h>
#include<conio.h>
#include<math.h> 

int main()
{
	double x,sum=0,term;
	int n=1;
		
		printf("Please enter a value of x = \n");
		scanf("%lf",&x);
				
		term=x;
				
				while(term>=1e-08)
				{
					
					n++;
					sum+=(n%2==0)?term:-term;
					term=term*x*x/(2*n-1)/(2*n-2);
					
				}
	
		printf("sin(x) = %lf",sum);	
	
	return 0;
}
