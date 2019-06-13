#include<stdio.h>
#include<math.h>
long long robot(int n)
{
	if(n<=2)
		return n;
	else if(n==3)
		return 4;
	else
		return (robot(n-1)+robot(n-2)+robot(n-3));  
	
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
	ways=robot(n);
	printf("there are %lld way that the robot needs to go %d meters\n",ways,n);
	return 0;
}
