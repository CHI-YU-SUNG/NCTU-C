#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b;
	char op;
		printf("�Ʀr�[���\n");
		
		printf("��J��Ӧr��\n");
		printf("�A��J + - * / �䤤�@��\n");
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
				printf("�п�J�@�ӥ��T���B�⦡\n");
				break;
		}
	} 
	return 0;
 } 
