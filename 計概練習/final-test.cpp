#include<stdio.h>
int main()
{
	void fuck(int );
	int a;
	scanf("%d",&a);
	fuck(a);
	return 0;
}
void fuck(int a)
{
	if(a<3){
		fuck(++a);
		printf("%2d",a);
	}
	else
		return ;
}
