#include<stdio.h>
int main()
{
	float *small,*large;
	float n1,n2;
	small=&n1;
	large=&n2;
	void order(float *,float *);
	scanf(" %f %f",&n1,&n2);
	order(small,large);
	return 0;
}
void order(float *small,float *large)
{
	float swap;
	if(*large>=*small)
		printf("the smaller one is %f\nthe bigger one is %f",*small,*large);
	else
	{
		swap=*small;
		*small=*large;
		*large=swap;
		printf("the smaller one is %f\nthe bigger one is %f",*small,*large);
	}
	
	
}
