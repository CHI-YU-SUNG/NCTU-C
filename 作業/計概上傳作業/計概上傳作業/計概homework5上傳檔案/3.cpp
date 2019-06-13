#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int x,d,i,n=0,j,k;
	
		printf("Please input a positive integer x =\n");
		scanf("%d",&x);
		i=x;
		
			while(i>0)
			{
				i/=10;
				n++;
			}
		
		d=x;
		
			while(d)
			{
				d=x;
				j=1;
				k=--n;
				
					while(k>=1)
					{		
						j*=10;
						k--;
					}
				
				d/=j;
				printf("%d  ",d);
				j==1?d=0:x=x%j;
				
			}
	
	return 0;
}
