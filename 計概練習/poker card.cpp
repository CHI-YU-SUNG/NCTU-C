#include<stdio.h>
#include<stdlib.h>
int main()
{	
	char color[4]={6,3,4,5};
	char num[13][3]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			printf("%c %-3s",color[i],num[j]);
		}
		printf("\n");
	}
	return 0;
}
