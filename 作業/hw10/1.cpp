#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double product_sum(int);
	double pi(int);
	double error(int);
	
	printf("input a number\n");
	printf("�Ĥ@�D\n"); 
	scanf("%d",&n);
	printf("s= %lf\n\n",product_sum(n));
	printf("�ĤG�D\n"); 
	scanf("%d",&n);
	printf("�k= %lf\n\n",pi(n));
	printf("�ĤT�D\n"); 
	printf("�k= %lf\n\n",error(1));    //���w���� 1 
	
	
	return 0;
}

double product_sum(int n)
{
	if(n==2)
		return 1./2;
	return (product_sum(n-1)+1./(n*(n-1)));
}

double pi(int n)
{
	if(n==0)
		return 4;
	else 
		return(pi(n-1)*(double)((2*n)*(2*(n+1))/pow(2*n+1,2)));

}
double error(int n)      //�������� n 
{
	double e;           
	e=pi(n)-M_PI;        //���n   �D�~�t    �ϥ�MATH.H��� 
	if(e<0.05)
		return pi(n) ;
	return (error(n+1));

}





