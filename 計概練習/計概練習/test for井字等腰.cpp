#include<stdio.h>
int main()
{
	int col,row,spa,num,n=0;
	scanf(" %d",&n);
	
			for(row=1;row<=n;row++){
				
				for(col=1;col<=2*n-1;col++){
					if(spa+num<n)//����Ů�� 
						printf(" ");
					else
						printf("*");
					if(col<n)
						num++;
					else
						num--;
				}
					if(row<n)
						spa++;
				printf("\n");
			}
	return 0;
} 
