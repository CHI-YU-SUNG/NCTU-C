#include<stdio.h>
#include<conio.h>

int main()
{
	float a,b,c,d,e,f;
		printf("To solve a set of simultaneous equations\n");
		printf("pdease enter six real numbers:\n");
		scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	float x,y;
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
		printf("a=%f b=%f c=%f d=%f e=%f f=%f\n",a,b,c,d,e,f);
		printf("x=%f\n",x);
		printf("y=%f\n",y);
	getch();
	return 0;
}
