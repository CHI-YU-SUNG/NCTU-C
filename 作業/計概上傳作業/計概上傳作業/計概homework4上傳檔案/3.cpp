#include<stdio.h>
#include<conio.h>

int main()
{
	int f1=1,f2=1,f3,sum=0;
	
		printf("The following sequence of numbers will stop when the sum exceeds 1000 : \n\n");
		printf("%d,",f1);
		printf("%d",f2);
		
			while(sum<=1000)
			{
				f3=f1+f2;
				printf(",%d",f3);
				f1=f2;
				f2=f3;
				sum+=f3;
			}
	
	getch();
	return 0;
}
