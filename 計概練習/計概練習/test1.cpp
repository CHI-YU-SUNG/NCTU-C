#include<stdio.h>
int main()
{
	int i,j,k;
	
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=i*2-2;j++)
					printf(" ");
			
				for(k=1;k<=11-2*i;k++)
					printf("*");
				printf("\n");
			}
	
	return 0;
}
