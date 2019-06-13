#include<stdio.h> 
#include<conio.h>

int main()
{
	float a,b;
		printf("please input a temperature in degrees Fahrenheit:%f\n");
		
		scanf("%f",&b);
		printf("the temperature in degrees Celsius is=%f\n\n\n",a=(b-32)*5/9);
		printf("如果5/9放在前面的話，分母會有問題，改到後面的話，分母在最後就不會有問題了");
	getch();
	return 0;	
}
