#include<stdio.h>
#include<iostream>
int main()
{
	//1-a
	printf(" 1-a \n");
	int a1=20,n1,sum1=0;
	
		printf("Please enter an integer n1 (n1>=11) : \n");
		scanf("%d",&n1);
		
			for( a1=20 ; a1<=2*n1 ; a1+=2 )
			{
				sum1+=a1;
			}
		
		printf("the sum1 of '20+22+24+...+2n' is = %d\n\n\n",sum1);
	
	//1-b
	printf(" 1-b \n");
	int a2=1;
	double sum2=0;
	
			for( a2=1 ; a2<=101 ; a2+=2)
			{
				sum2+=1./a2;
			} 
		
		printf("the sum2 of '1+1/3+1/5+...+1/101' is = %lf\n\n\n",sum2);
		
	//1-c
	printf(" 1-c \n");
	int a3=1,n3,product=1,x=1;
	long double sum3=0;
	
		printf("Please enter an integer n3 (n3>=1) : \n");
		scanf("%d",&n3);
		
			for( a3=1 ; a3<=n3 ; a3++ )
			{
					for( x=1 ; x<=a3 ; x++ )
					{
						product*=x;
						
							if(x==a3)
							{
								sum3+=1./product;
								product=1;
							}
					}
			}
		
		printf("n3 = %d \n",n3);
		printf("the sum3 of 1/1!+1/2!+...+1/n! is = %le\n\n\n",sum3);
	
	//1-d
	printf(" 1-d \n");
	int sum4=0,n4,a4;
	
		printf("Please enter an integer n4 (n4>=1) : \n");
		scanf("%d",&n4);
			
			for( a4=1 ; a4<=n4 ; a4++ )
			{
				if ( a4 % 2 != 0)
				{
					sum4+=a4;
				}
				
				else if ( a4 % 2 == 0)
				{
					sum4-=a4;
				}
			}
	
		printf("n4 = %d \n",n4);
		printf("the sum4 of 1-2+3-4+...(-1)^(n4+1)*n4 is = %d\n\n\n",sum4);
		
	//1-e
	printf(" 1-e \n");
	int a5,n5,sum5=0,i,k=0;
	
		printf("Please enter an integer n5 (n5>=1) : \n");
		scanf("%d",&n5);
			
			for( a5=1 ; a5<=n5 ; a5++ )
			{
				for( i=1 ; i<=a5 ; i++ )
				{
					k+=i;
						if( i==a5 )
						{
							sum5+=k;
							k=0;
						}
				}
			}
		
		printf("the sum4 of 1+(1+2)+(1+2+3)+...+(1+2+3+...+n5) is = %d\n\n\n",sum5);
		
		
		
	
	return 0;
}
