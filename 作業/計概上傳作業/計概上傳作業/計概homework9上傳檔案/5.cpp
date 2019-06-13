#include<stdio.h>
int main()
{
	int mon,fif=0,twen=0,ten=0;
	scanf("%d",&mon);
	while(mon>=50)
	{
		mon-=50;
		fif++;
	}
	while(mon>=20)
	{
		mon-=20;
		twen++;
	}
	while(mon>=10)
	{
		mon-=10;
		ten++;
	}
	printf("we need at least:\n%d $50s\n%d $20s\n%d $10s",fif,twen,ten);
	return 0;
}
