#include<stdio.h>
#include<stdlib.h>
int main()
{
	long a,b,c,d,t;
	
	printf("時間單位轉換。\n");
	printf("初始時間(秒): ");
	
	scanf("%ld",&t);
	a=t/3600;
	b=t%3600;
	c=b/60;
	d=b%60;
	printf("轉換時間: %ld小時 %ld分鐘 %ld秒鐘",a,c,d);
	
	return 0;
} 
