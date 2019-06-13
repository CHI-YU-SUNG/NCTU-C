#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x,d,i=0,j,k,sum=0;
	
		printf("Please enter a binary value of x (x is composed of either 1 or 0) = \n");
		scanf("%d",&x);
		
			while(x>0.9)
			{
				k=1;
				d=x%10;
				j=pow(2,i);
				i++;
				k=d*j;
				x/=10;
				sum+=k;
			}
			
			printf("The decimal number is = %d",sum);
	
	return 0;

}
