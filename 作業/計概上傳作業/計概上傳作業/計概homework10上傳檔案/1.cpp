#include<stdio.h>
#include<math.h>
double s(int n)
{
	if(n==2)
		return 1./2;
	return (s(n-1)+1./(n*(n-1)));
}
double pif(int n)
{
	if(n==0)
		return 4;
	return (pif(n-1)*(double)((2*n*2*(n+1))/pow((2*n+1),2)));
}
int error(int y)
{
	double e;
	e=pif(y)-M_PI;
	if(e<0.005)
		return y;
	return (error(y+1));
}
int main()
{
	printf("1-a\n");
	int n;
	double sum;
	scanf("%d",&n);
	sum=s(n);
	printf("sum is %lf\n\n\n",sum);
		
	printf("1-b\n");
	double pi;
	int x;
	scanf("%d",&x);
	pi=pif(x);
	printf("pi = %lf\n\n\n",pi);
	
	printf("1-c\n");	
	int e;
	e=error(1);
	printf("n is %d\n\n\n",e);
	return 0;
}
