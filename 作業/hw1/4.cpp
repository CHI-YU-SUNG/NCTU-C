#include<stdio.h>
#include<stdlib.h>
int main()
{
	long a,b,c,d,t;
	
	printf("�ɶ�����ഫ�C\n");
	printf("��l�ɶ�(��): ");
	
	scanf("%ld",&t);
	a=t/3600;
	b=t%3600;
	c=b/60;
	d=b%60;
	printf("�ഫ�ɶ�: %ld�p�� %ld���� %ld����",a,c,d);
	
	return 0;
} 
