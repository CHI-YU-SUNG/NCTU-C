#include<stdio.h> 
#include<conio.h>

int main()
{
//case 1
printf("case 1:\n");
	float a,b,c,d,e;
		printf("please input five floating-point numbers\n");
		
		scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
		printf("%f %f %f %f %f\n",a,b,c,d,e);
		printf("the sum of the five floating-point numbers is=%f\n",a+b+c+d+e);
		printf("the average of the five floating-point numbers is=%f\n\n\n\n\n",(a+b+c+d+e)/5.);
		
		
//case 2
printf("case 2:\n");
	float x,y;
		printf("please input two numbers x=  ,y=  \n");
		scanf("%f %f",&x,&y);
		printf("%f\n",x+=y);
		printf("please input another number y=  \n");
		scanf("%f",&y);
		printf("%f\n",x+=y);
		printf("please input another number y=  \n");
		scanf("%f",&y);
		printf("%f\n",x+=y);
		printf("please input another number y=  \n");
		scanf("%f",&y);
		printf("%f\n\n",x+=y);
		
		printf("the sum is=%f\n",x);
		printf("the average is=%f\n",x/5);	
		
		

	getch();	
	return 0;	
}

