#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b;
	char op;
		printf("數字加減乘除\n");
		
		printf("輸入兩個字母\n");
		printf("再輸入 + - * / 其中一個\n");
	while(scanf("%f %c %f",&a,&op,&b))	
	{	
		switch(op)
		{	
			case'+':
				printf("%f+%f=%f\n",a,b,a+b);
				break;
			case'-':
				printf("%f-%f=%f\n",a,b,a-b);
				break;
			case'*':
				printf("%f*%f=%f\n",a,b,a*b);
				break;
			case'/':
				printf("%f/%f=%f\n",a,b,a/b);
				break;
			default:
				printf("請輸入一個正確的運算式\n");
				break;
		}
	} 
	return 0;
 } 
