#include<stdio.h>
#include<conio.h>

int main()
{
	float r,r1,r2,r3,r4,r5;
		printf("please enter five parrallel resistance:\n");
		scanf("%f %f %f %f %f",&r1,&r2,&r3,&r4,&r5);

	r=1/((1/r1)+(1/r2)+(1/r3)+(1/r4)+(1/r5));
		printf("the effective resistance is");
		printf("%f",r);
	getch();
	return 0;
}
