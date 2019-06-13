#include<stdio.h>
#include<conio.h>
#include<math.h>
# define f(x) (x)-((x)*(x)-n)/(2*(x))
int main()
{
	double y,x=100,n;
	scanf("%lf",&n);
	while(x*x-n>=1e-15)
		x=f(x);
	printf("%.14lf",x);
	return 0;
}
