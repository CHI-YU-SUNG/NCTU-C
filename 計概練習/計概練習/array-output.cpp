#include<stdio.h>
int main()
{
	int x[6]={1,2,3,4,5,6};
	for(int i=0;i<5;i++)
		printf("%d,",x[i]);
	printf("%d",x[5]);
	return 0;
}
