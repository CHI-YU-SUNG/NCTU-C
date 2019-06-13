#include<stdio.h>
int main()
{
	int *p,*q,a=1,b;
	float *r,f=1.2;
	p=&a;
	printf("enter a integer value:");
	scanf("%d,&b");
	q=&b;
	r=&f;
	printf("%d %d %6.3f\n",*p,*q,*r);
	return 0;
}
