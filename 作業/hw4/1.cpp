#include<stdio.h>
#include<stdlib.h>
int main()
{

	long long i,j,n,pow,sum=0;
	//a�p�D 
	printf("a�p�D");
	printf("�п�J�@��x��");
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{	for(j=1,pow=1;j<=i;j++)
			pow*=i;
		sum+=pow;
	}
	printf("S=1^1+2^2+3^3+...+x^x= %lld\n",sum);
	
	
	//b�p�D
	int s=1;
	float n1,sum1,pow1=1;
	printf("b�p�D");
	printf("�A��J�@��x��: "); 
	scanf("%f",&n1);
	for(i=1;i<=11;i+=2)
	{
		for(j=1;j<=i;j++)
			pow1*=(1./n1);
		sum1+=pow1*s;
		s*=-1;
	}	
	
	printf("1/x-1/x^3+1/x^5...-1/x^11= %f",sum1);
	
	
	
	
	return 0;
 } 
