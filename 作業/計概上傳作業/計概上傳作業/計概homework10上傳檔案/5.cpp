#include<stdio.h>
#include<math.h>
long long ways(int n)
{
	if(n<=2)
		return n;
	return (ways(n-1)+ways(n-2));  
	
}
int main()
{
	int n;
	long long way;
	do{
		printf("please enter a positive number you want the robot to go\n");
		scanf("%d",&n);
	}
	while(n<0);
	way=ways(n);
	printf("there are %lld way that the robot needs to go %d meters\n",way,n);
	return 0;
}
