#include<stdio.h>
int main()
{
	int col,row,spa,num,n,eng=1;
	scanf("%d",&n);
	
		for(row=1;row<=2*n-1;row++){
			num=1;
			eng=1;
			for(col=1;col<=2*n-1;col++){
				if(spa+num<n+1)//注意到是<n+1，重點！ 
					printf("%c ",64+eng);
				else
					printf("  ");
				if(col<n){//注意到是<n，重點！ 
					num++;
					eng++;
				}
				else{
					num--;
					eng--;
				}
			}
			if(row<n)
				spa++;
			else
				spa--;
			printf("\n");
		}
	return 0;
} 
