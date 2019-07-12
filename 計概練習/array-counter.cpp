#include<stdio.h>
#include<stdlib.h>
int main()
{
	int dice[6]={0};
	int s,num;
	printf("Please enter a number for your seed\n");
	scanf("%d",&s);
	srand(s);
	for(int i=1;i<=100;i++){
		num=rand()%6;
		dice[num]++;
	}
	for(int i=0;i<6;i++)
		printf("face %d ==> %d times\n",i+1,dice[i]);
	
	return 0;
}
