#include<stdio.h>
int main()
{
	int col,row,spa=0,num,n,i=1;
	scanf("%d",&n);
	
			for(row=1;row<=n;row++){
				i=1;
				//數字梯形或等腰，很重要的是要"設回出值"。 
				//少了設出值，會print出很奇怪的東西。 
				num=1;
				for(col=1;col<=2*n-1;col++){
					if(spa+num<n)
						printf("  ");
					else
						if(col<n){
							printf("%2d",i);
							i++;
						}
						else{
							printf("%2d",i);
							i--;
						}		
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
