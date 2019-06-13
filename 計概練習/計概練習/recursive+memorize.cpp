#include<stdio.h>
#include<conio.h>
int memo[1000000]={0};
int fib(int n)
{
	if(n==0 || n==1)
		return 1;
	if(memo[n]!=0)
		return memo[n];
	return memo[n]=fib(n-1)+fib(n-2);
}
int main()
{
	int n;
	printf("Please enter :\n");
	scanf("%d",&n);
	printf("fib=%d\n",fib(n));
	printf("%d",memo[20]);
	getch();
	return 0;
}
