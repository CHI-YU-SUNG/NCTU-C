#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter two integers:");
	scanf("%d %d",&a,&b);
	int gcd(int ,int );
	printf("the gcd of a and b is = %d",gcd(a,b));
	return 0;
}
int gcd(int x,int y)
{
	if(y==0)
		return x;
	else
		return (gcd(y,x%y));
}
