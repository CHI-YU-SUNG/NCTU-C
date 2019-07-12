#include<stdio.h>
#include<conio.h>
int main()
{
	int fm=1,m=0,i,days,pfm;
	scanf("%d",&days);
	for(i=1;i<=days;i++)
	{
		pfm=fm;
		fm=m+1;
		m=m+pfm;
		
	}
	
	
	return 0;
}
