#include<stdio.h>
int main()
{
	int i=1,k,j,m,judge=0,e=0;
	double fact=1;
	
	printf("please input a number k to do the following calculation\n\n");
	scanf("%d",&k);
	
			while(i)
			{
				
				printf("please input a number i:\n");
				printf("1 to calculate factorial of a number\n");
				printf("2 to calculate prime or not\n");
				printf("3 to calculate odd or even\n");
				printf("4 to exit the calculation\n");
				scanf("%d",&i);
				
					switch(i)
					{
						case 1:
							for(j=1;j<=k;j++)
							{
								fact*=j;
								while(fact>10)
								{
									fact/=10;
									e++;	
								}
							}
							printf("%d! = %10.8lfE+%d\n\n",k,fact,e);
							fact=1;
							e=0;
							break;
						
						case 2:
							for(m=2;m<k;m++)
							{
								if(k%m==0)
								{
									judge+=1;
								}
								else
								{
									NULL;
								}
							}
							if(judge!=0)
							{
								printf("%d is not prime\n\n",k);
							}	
							else
							{
								printf("%d is prime\n\n",k);
							}
							judge=0;
							break;
							
						case 3:
							k%2==0?(printf("%d is even\n\n",k)):(printf("%d is odd\n\n",k));
							break;
						
						case 4:
							break;
							
						default:
							printf("please input another number of i\n\n");
						
					}
				
				if(i==4)
				{
					break;
				}
			}
	
	return 0;
}
