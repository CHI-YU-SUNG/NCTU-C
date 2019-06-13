#include<stdio.h>
#include<math.h>
int main()
{
	double n,fracp;
	char signp;
	int wholep;
	void seperate(double,char *,int *,double *);
	scanf("%lf",&n);
	seperate(n,&signp,&wholep,&fracp);
	
	return 0;
}

void seperate(double n,char *signp,int *wholep,double *fracp)
{
	if(n>=0)
		*signp='+';
	else
		*signp='-';
	*wholep=int(n);
	*fracp=n-int(n);
	
	printf("sign: %c\n",*signp);//¬°%c 
	printf("whole(¾ã¼Æ)part(): %d\n",abs(*wholep));
	printf("fractional part :%lf\n",fabs(*fracp));
}
