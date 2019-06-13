#include<stdio.h>
int main()
{
	void sumavg(double,double,double,double *,double *);
	double n1,n2,n3,*sum,*avg;
	scanf(" %lf %lf %lf",&n1,&n2,&n3);
	sumavg(n1,n2,n3,&sum,&avg);
	return 0;
}
double sumavg(double n1,double n2,double n3,double *sump,double *avgp)
{
	*sump=n1+n2+n3;
	*avgp=*sump/3.;
	printf("sum is = %lf\naverage is = %lf",*sump,*avgp);
}
