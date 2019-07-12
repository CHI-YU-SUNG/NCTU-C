#include<stdio.h>
int main()
{
	void change(char []);
	char s[] = "abc";
	puts(s);
	change(s);
	puts(s);
	printf("\n%u\n",&s);
	return 0;
}
void change(char x[])
{
	*(x+1) = '^';
}
