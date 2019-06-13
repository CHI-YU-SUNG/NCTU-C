#include<stdio.h>
#include<conio.h>

int main()
{
//method A	
printf("method A:\n");	
	{
	
	int i,y;
	float a[6],x;
	double sum=0,p=1;	
		
		printf("Input a value of x \n");
		scanf("%f",&x);
			
			for(i=5;i>=0;i--)
			{
				printf("Please input a number a[%d]\n",i);
				scanf("%f",&a[i]);
				
					for(y=1;y<=i;y++)
					{
						p*=x;
					}
				
				sum+=a[i]*p;
				p=1;
			}

			printf("The sum of a[5]*x*x*x*x*x + a[4]*x*x*x*x + a[3]*x*x*x + a[2]*x*x + a[1]*x + a[0] is = %lf\n\n\n",sum);
	}
	
	
//method B	
printf("method B:\n");
	
	{
	int i;
	float a[6],x;
	double sum=0;
		
			printf("Input a value of x \n");
			scanf("%f",&x);
		i=5;
			printf("Please input a number a[%d]\n",i);
			scanf("%f",&a[i]);	
			printf("Please input a number a[%d]\n",i-1);
			scanf("%f",&a[i-1]);
		sum=a[i];
		sum=sum*x+a[i-1];
				
				for(i=3;i>=0;i--)
				{
					
					printf("Please input a number a[%d]\n",i);
					scanf("%f",&a[i]);
					sum=sum*x+a[i];
					
				}
		
			printf("The sum of a[5]*x*x*x*x*x + a[4]*x*x*x*x + a[3]*x*x*x + a[2]*x*x + a[1]*x + a[0] is = %lf\n\n",sum);

	}
	
	
		printf("方法A需要用到20次運算，而方法B只需10次運算，因此方法B較有效率。")
	
	
	getch();
	return 0;
}
