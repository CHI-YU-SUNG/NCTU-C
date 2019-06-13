#include<stdio.h>
#include<conio.h>

int main()
{
//1-a
printf("1 - a\n");
	
	{
	double f0=2e10,f1=2.0000004e10,v;
	
		printf("f0 = %lg\n",f0);
		printf("f1 = %lg\n",f1);
	
	v=(6.685e8)*(f1-f0)/(f1+f0);
		printf("The speed v corresponding to a received frequency is = %lg\n",v);
	}
		
//1-b
printf("1 - b\n");
	
	{
	double f0=2e10,f1,v=55;
	
		printf("f0 = %lg\n",f0);
		printf("v = %lg\n",v);
	
	f1=(-v-6.685e8)*f0/(v-6.685e8);
		printf("The received frequency is = %lg\n",f1);
	}
	
	
	getch();
	return 0;
}
