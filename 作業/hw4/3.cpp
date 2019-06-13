#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f1,f2,f3;
	f2=1,f3=1;
	while(f1<=1000)
	{	
		f1=f2+f3;
		f3=f2;
		f2=f1;
		
	}
	printf("1,1,2,3,5,8,13,21,...=%d",f1);
	
	
	return 0;
}
