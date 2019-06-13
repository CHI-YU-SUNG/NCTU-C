#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num,toss=0,c=0;
	int dice[6]={0};
	srand(time(NULL));
	do{
		num=rand()%6;
		toss++;
		if(dice[num]==0){
			c++;
			dice[num]=1;
		}
	}
	while(c<6);
	printf("we need at least %3d times\n",toss);
	return 0;
} 
