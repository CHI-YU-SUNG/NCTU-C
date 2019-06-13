#include<stdio.h>
#include<stdlib.h>
int main()
{
	float n1,n2;
	float *small,*large;
	small=&n1;
	large=&n2;
	printf("Input two different number:  ");
	void order(float*,float*);
	scanf("%f %f",&n1,&n2);
	order(small,large);
	
	return 0;
}

void order(float *small,float *large)
{
	if(*large>*small)
	{
	
		printf("large number: %f\n",*large);
		printf("small number: %f\n",*small);
	}else if(*large<*small)
	{
		printf("large number: %f\n",*small);
		printf("small number: %f\n",*large);
	}else
		printf("same");
	
	
}
