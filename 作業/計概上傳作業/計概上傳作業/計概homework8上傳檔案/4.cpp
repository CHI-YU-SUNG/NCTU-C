#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float pi,pf,vol,temp;
	printf("Please input an initial position\n");
	scanf("%f",&pi);
	printf("Please input a voltage\n");
	temp=pi;
	while(scanf("%f",&vol))
	{
		if(vol>=0)
		{
			printf("initial position is %f\nfinal position is %f\n\n",temp,vol>0.2?(temp+2*vol):temp);
			vol>0.2?temp=temp+2*vol:temp;
		}
		else
		{
			printf("initial position is %f\nfinal position is %f\n\n",temp,vol<-0.2?(temp+1*vol):temp);
			vol<(-0.2)?temp=temp+1*vol:temp;
		}	
		printf("Please input a voltage\n");	
	}
	return 0;
} 
