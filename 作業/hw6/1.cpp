#include<stdio.h>
#include<stdlib.h>
int main()
{
	{
		//�m�߾��ҩM  <case1> 
		double x=0.1,f1,f2,sum=0,h,area=0;
		int a=0,b=10;
		h=0.1;
	
		printf("��Ʀ��p��\n");
		f2=8*b*b*b+3*b*b+6*b+10;
		f1=8*a*a*a+3*a*a+6*a+10;
	
			while(x<10)
			{
				sum+=8*x*x*x+3*x*x+6*x+10;
				x+=0.1;	
			}
		area=0.5*h*(f1+f2+2*sum);
		printf("area= %lf\n\n",area);
	} 

	
	{
		//<case2>
		double x=0.1,sum=0,h,area=0;
		int a=0,b=10;
		h=0.1;
	
		printf("�ĤG�ؤ覡��Ʀ��p��\n");
			while(x<10)
			{
				sum+=8*x*x*x+3*x*x+6*x+10;
				x+=0.1;
			
			}
		area+=h*sum;
	
	
		printf("area=  %lf",area);
		return 0;
 	} 
} 
