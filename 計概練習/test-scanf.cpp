#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i;
	
	
	for(i=1;i<=10;i++)
	{
		printf("please enter a value of x \n");
		y=scanf("%d",&x);
		printf("x=%d , y=%d\n\n",x,y);
		x=1;
	}
	return 0;
}
