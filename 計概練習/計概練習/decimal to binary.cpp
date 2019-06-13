#include<stdio.h>
#include<math.h>
int main()
{
	int decimal,n=1,digit=7,i;
	printf("Please enter a decimal number\n");
	
		while(scanf("%d",&decimal))
		{
			n=pow(2,6);
			for(i=1;i<=digit;i++)
			{
				if(decimal>=n)
				{
					printf("1");
					decimal-=n;
					n/=2;
				}
				else
				{
					printf("0");
					n/=2;
				}
			}
			printf("\n");
		}
	return 0;
} 
