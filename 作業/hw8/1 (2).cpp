#include<stdio.h>
#include<stdlib.h>
int is_prime(int);
int main()
{
	int n;
	printf("質數:1 \n非質數:0\n");
	printf("請輸入一個數字: ");
	scanf("%d",&n);
	
	printf("%d",is_prime(n));
	
	return 0;
} 
int is_prime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{	
		if(n%i==0)
			return 0;
		return 1;
	}
}
