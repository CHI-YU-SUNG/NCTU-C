#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char *s1 = new char[10];
	strcpy(s1,"getche()");
	for(int i=0;i<3;i++)
	printf("%s",s1);
	
	return 0;
}
