#include<stdio.h>
int main()
{
	int x[3];
	void input(int []);
	input(x);
	for(int i=0;i<3;i++)
		printf("x[%d] = %5d\n",i,x[i]);
	return 0;
}
void input(int x[3])
{
	for(int i=0;i<3;i++)
		scanf("%d",&x[i]);
}
