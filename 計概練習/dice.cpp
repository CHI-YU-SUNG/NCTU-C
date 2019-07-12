#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num,times=0,c=0;
	int dice[6]={0};
	srand(time(NULL));
	do{
		num=rand()%6;
		times++;
		if(dice[num]==0){
			dice[num]=1;
			c++;
		}
	}
	while(c<6);
	printf("totally toss %d times\n",times);
	return 0;
}
