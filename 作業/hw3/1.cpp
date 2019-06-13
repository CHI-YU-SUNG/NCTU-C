#include<stdio.h>
#include<stdlib.h>
int main()
{
	//a小題 
	int n,i=2,j=18,sum1=20;
	do
	{
		printf("a小題\n");
		printf("請輸入n值(n為偶數): ");
		scanf("%d",&n);		
	
	}
	while(n%2==1 || n>=10);   
	do
	{
	sum1+=j+(i+=2);
	}
	while(i<=n);
	printf("20+22+...+2%d=%d\n",n,sum1);
	
	//b小題
	printf("b小題\n");
	double k=1,sum2=0;
	for(k=1;k<=101;k+=2)
		sum2+=1./(k);
	
	printf("1+1/3+1/5...+1/101= %lf\n",sum2);
	
	//c小題
	int a,m=1,p1=1;
	double p2;
	do
	{
		printf("c小題\n");
		printf("請輸入n值 (n>0)) : ");
		scanf("%d",&a);
	 } 
	while(a<=0);
	do
	{
		p1*=m++;
		p2+=1./p1;
	}
	while(m<=a);
	printf("1+1/3!+1/5!+...+1/n!=%lf\n",p2);
	
	//d小題 
	int b=1,c,d,sum3=0;
	printf("d小題");
	printf("請輸入一個正整數: ");
	scanf("%d",&c);
	for(b=1;b<=c;b++)
	{
		sum3+=b*d;
		d*=-1;
	}
	printf("1-2+3...+(-1)^(n-1)*n= %d\n",sum3);
	
	//e小題
	int e,f,sum4=0,sum5=0;
	printf("e小題\n");
	printf("請輸入一個正整數: ");
	scanf("%d",&e);
	for(f=1;f<=e;f++)
	{
		sum4+=e;
		sum5+=sum4;
	}
	printf("1+(1+2)+(1+2+3)...(1+2+3+4...+n)= %d",sum5); 
	
	
	
	return 0;
}
