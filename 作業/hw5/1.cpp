#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("a�p�D\n");
	printf("�Ц��p����e����: \n");
	double p1=1,sum1=1,i;
	for(i=1;p1<10E6;i++)
	{
		p1*=i;
		sum1+=1./p1;
	}
	printf("���׬�(�~�t�p��10^-6): %lf\n\n",sum1);
	
	printf("b�p�D\n");
	printf("�Ц��p����e����: \n");
	double p2=1,p3=0,n,sum2=1,j;
	for(j=1;p3<1000;j++)
	{
		p3+=p2;
		p2*=j;
		sum2+=1./p2;
	}
	printf("���׬�(�ⶵ�t�~�t�p��10^-3): %lf\n",sum2);
	printf("%lf\n",p2);
	printf("%lf",p3);
	return 0;
}


