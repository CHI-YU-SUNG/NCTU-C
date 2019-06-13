#include<stdio.h>
#include<conio.h>

int main()
{
	int n=1;
	double sum=0,x=1e-06;
		
			while(1./n>=x)
			{
				
				(n+1)/2%2==1?(sum+=(1./n)):(sum+=(-1./n));
				n+=2;
				
			}
		
		printf("sum = PI/4 = %lf",sum);

	getch();
	return 0;
}
