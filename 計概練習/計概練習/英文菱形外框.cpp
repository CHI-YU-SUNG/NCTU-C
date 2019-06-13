#include<stdio.h>
int main()
{
	int col,row,spa=0,num,n;
	scanf("%d",&n);
	
		for(row=1;row<=2*n-1;row++){
			num=1;
			for(col=1;col<=2*n-1;col++){
				if(spa+num<n+1)
					printf("* ");
				else
					printf("  ");
				if(col<n)
					num++;
				else
					num--;
			}
			if(row<n)
				spa++;
			else
				spa--;
			printf("\n");
		}
	return 0;
} 
