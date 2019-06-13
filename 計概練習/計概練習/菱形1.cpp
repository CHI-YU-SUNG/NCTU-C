#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	k=0;
		for(i=1;i<=2*n-1;i++)
		{
			j=1;		
			for(l=1;l<=2*n-1;l++)
			{
				if(k+j<n)
					printf(" ");//space before letter
				else 
					printf("*");
				if(l<n)//要用l不是用j，很重要！ 
					j++;
				else
					j--;
			}
			
			if(i<n){
				k++;
			}
			else{
				k--;
			}
			printf("\n");
		}
	return 0;
} 
