#include<stdio.h>
int main()
{
	double x,y,ans;
	double power(double,double);
	scanf("%lf %lf",&x,&y);
	ans=power(x,y);
	printf("%lf",ans);
	return 0;
}
double power(double x,double y)
{
	int i;
	double product=1;
	for(i=1;i<=(y<0?-y:y);i++)
		product*=x;
	if(y<0)
		return (1./product);
	return product;
}
