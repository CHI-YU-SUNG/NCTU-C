#include<stdio.h>
int main()
{
	char *t[13]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	char color[4]={6,3,4,5};
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++)
			printf("%c %-3s",color[i],t[j]);
		printf("\n");
	}
	return 0;
} 
