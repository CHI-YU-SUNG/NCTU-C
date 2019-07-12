#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int num;
	int dice[6]={0};
	for(int i=0;i<100;i++){
		num=rand()%6;
		dice[num]++;
	}
	for(int i=0;i<6;i++)
		printf("%2d ==> %3d times\n",i+1,dice[i]);
	return 0;
} 
