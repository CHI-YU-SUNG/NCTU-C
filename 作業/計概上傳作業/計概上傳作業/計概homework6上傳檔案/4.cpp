#include<stdio.h>
int main()
{
	float num1,num2;
	char op;
	
			printf("if you don't want to calculate.\n");
			printf("please input ctrl+d and enter\n");
			printf("Please input two numbers to do operation : \n");
		
		while(scanf("%f%c%f",&num1,&op,&num2))
		{
			
			switch(op)
			{
				case '/':
					printf("%f %c %f = %f",num1,op,num2,num1/num2);
					break;
				
				case '*':
					printf("%f %c %f = %f",num1,op,num2,num1*num2);
					break;
				
				case '+':
					printf("%f %c %f = %f",num1,op,num2,num1+num2);
					break;
				
				case '-':
					printf("%f %c %f = %f",num1,op,num2,num1-num2);
					break;
					
				case '%':
					printf("%d %c %d = %d",(int)num1,op,(int)num2,(int)num1%(int)num2);
					break;
			
				default:
					printf("Please input a correct operator,such as '+' '*' '/' '-'");
			}
		}
		
		
		
		
		
		
		
	return 0;
}
