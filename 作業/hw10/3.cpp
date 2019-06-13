#include<stdio.h>
int main()
{
	long long ways(int);
	int n; 
	printf("The number of ways\n");
	do{ 
	scanf("%d",&n);
	}while(n<=0); 	
	printf("answer: %d",ways(n));	
		
	
	return 0;
}

long long ways(int a)
{
	if(a<=2)
		return a;
	else if(a==3)
		return 4;
	else
		return (ways(a-1)+ways(a-2)+ways(a-3));
}
