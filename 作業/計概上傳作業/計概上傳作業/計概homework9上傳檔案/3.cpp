#include<stdio.h>
#include<math.h>
int main()
{
	double num;
	char sign;
	int whole;
	double fra;
	scanf(" %lf",&num);
	void separate(double,char *,int *,double *);
	separate(num,&sign,&whole,&fra);
	return 0;
}
void separate(double num,char *signp,int *wholep,double *frap)
{
	if(num<0)
		*signp='-';
	else
		*signp='+';
	printf("sign is %c\n",*signp);
	*wholep=(int)num;
	printf("the whole part of the number is %d\n",*wholep);
	*frap=num-(int)num;
	printf("the fraction part of the number is %lf\n",fabs(*frap));
}
