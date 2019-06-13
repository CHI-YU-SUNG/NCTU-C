#include<stdio.h>
int main()
{
	int ways(int);
	int n;
	printf("The number of ways\n");
	do
	{ 
	scanf("%lld",&n);
	}while(n<=0); 
		
		
	
	return 0;
}

int ways(int a)
{
	int k=0;
	if(a==1)
	{ 
		printf("%d to %d\n",k,k+1);
		k+=1;
	} 
	else if(a==2)
	{
		printf("%d to %d\n",k,k+2);
		k+=2;
	}
	else
		ways(a)=ways(a-1)+ways(a-2); 
}
