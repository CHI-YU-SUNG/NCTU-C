#include<stdio.h>
int main()
{
	int x[5]={1,2,3,4,5};
	int *p=x;
	printf("%u\n",p);
	printf("%u\n",&x);
	
	return 0;
}
