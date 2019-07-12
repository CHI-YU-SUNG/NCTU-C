#include<stdio.h>
int main()
{
	int *p,*q,a=1,b=2;
	
	p=&a;
	q=&b;
	
	printf("address: %x,\tq=%x\n\n",p,q);
	
	*p=5;
	b=8;
	q=&b;
	printf("*q=%d\n",*q);
	printf("address: %x,\tq=%x\n\n",p,q);
	
	*p=*q;
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	printf("address: %x,\tq=%x\n\n",p,q);
	
	p=&a;
	q=&b;
	p=q;
	printf("variable : a = %d\tb = %d \n",a,b);
	printf("pointer : *p = %d\t*q = %d\n",*p,*q);
	printf("address : p = %x\tq = %x",p,q);	
	
	return 0;
} 
