#include<stdio.h>
int main()
{
	int x[5]={1,2,3,4,5};
	int *p=x;
	printf("address is %u , value is %d\n",&x[1],x[1]);
	printf("address is %u , value is %d\n",&p[2],p[2]);
	printf("address is %u , value is %d\n",p+3,*(p+3));
	return 0;
}
