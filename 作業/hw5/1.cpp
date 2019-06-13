#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("a小題\n");
	printf("請估計指數e的值: \n");
	double p1=1,sum1=1,i;
	for(i=1;p1<10E6;i++)
	{
		p1*=i;
		sum1+=1./p1;
	}
	printf("答案為(誤差小於10^-6): %lf\n\n",sum1);
	
	printf("b小題\n");
	printf("請估計指數e的值: \n");
	double p2=1,p3=0,n,sum2=1,j;
	for(j=1;p3<1000;j++)
	{
		p3+=p2;
		p2*=j;
		sum2+=1./p2;
	}
	printf("答案為(兩項差誤差小於10^-3): %lf\n",sum2);
	printf("%lf\n",p2);
	printf("%lf",p3);
	return 0;
}


