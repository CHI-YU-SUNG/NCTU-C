#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i,sperate;
	scanf("%d",&num);
	printf("��J�@�ӥ����: \n");
	i=10;
	while(num%i>0)
	{
		sperate=num%10;
		num=num/10;
		
		printf("%d\n",sperate);
		i*=10;
	}
	
	
	
	
	
	return 0;
}
