#include<stdio.h> 
#include<conio.h>

int main()
{
	float x;
		printf("please input a number x:\n");
		
		scanf("%f",&x);
		printf("f(x) is=%f",x*x*x+5*x*x+10*x+15);
	
	getch();
	return 0;
}
