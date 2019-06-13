#include<stdio.h> 
#include<conio.h>

int main()
{
	float t,z;
	int x,y;
		printf("please enter a length of time t in seconds\n");
		scanf("%f",&t);
		printf("the number of hours x is=%d\n",x=t/3600);
		printf("the number of minutes y is=%d\n",y=(t-x*3600)/60);
		
		printf("the number of seconds z is=%f\n",t-x*3600-y*60);
	
	getch();
	return 0;
}
