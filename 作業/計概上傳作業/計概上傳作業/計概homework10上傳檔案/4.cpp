#include<stdio.h>
#include<math.h>
long long robot(int n)
{
	if(n==1)
		printf("%d ",n);
	else if(n==2)
		printf("1 1 ");
	else
		return (robot(n-1)+robot(n-2));  
	
}
int main()
{
	int n;
	long long ways;
	do{
		printf("please enter a positive number you want the robot to go\n");
		scanf("%d",&n);
	}
	while(n<0);
	robot(n);
	return 0;
}
