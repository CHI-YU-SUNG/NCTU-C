#include<stdio.h>
#include<conio.h>

int main()
{
//1-a
printf("1 - a\n");
	{	
	int i,n,x,y;
	double s=0,p=1;
	
		printf("Please enter a value of x = \n");
		scanf("%d",&n);
			
			for(i=1;i<=n;i++)	
			{
				
				for(y=1;y<=i;y++)
				{
					x=i;
					p*=x;
					
				}
				
				s+=p;
				p=1;
			}
		printf("1^1 + 2^2 + 3^3 + ... + x^x = %lg\n\n\n",s);
	}
	
//1-b
printf("1 - b\n");

	{
	int i,n=11,y;
	double x,sum=0,p=1;
					
		printf("Please enter a value of x = (x>1)\n");
		scanf("%lg",&x);			
						
			for(i=1;i<=n;i+=2)
			{
				
				for(y=1;y<=i;y++)
				{
					p*=x;
				}
				
				((i+1)/2)%2==1?sum+=1/p:sum-=1/p;
				
			}	
	
		printf("%lg",sum);
	
	}
	
	getch();
	return 0;
}
