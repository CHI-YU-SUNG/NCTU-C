#include<stdio.h>
int main()
{
	void reverse_digit(int );
	void unreverse_digit(int );
	int a;
	printf("please enter a four-digit integer:");
	scanf("%d",&a);
	reverse_digit(a);
	printf("\n");
	unreverse_digit(a);
	return 0;
}
void reverse_digit(int x)
{
	if(x!=0){
		printf("%d",x%10);
		reverse_digit(x/10);
	}
}
void unreverse_digit(int x)
{
	if(x!=0){
		unreverse_digit(x/10);
		printf("%d",x%10);
	}
}
