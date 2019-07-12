#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	char A;
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
		{
			
			
			for(j=i,k=1;j<=i;j++,k++)
			{
				printf("%c",'A'+k);
			}
			
			
			printf("\n");
		}
	
	return 0;
} 
