#include<stdio.h>
#define n 4

void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

void ascend(int a[n])
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(&a[i],&a[j]);
}

void descend(int a[n])
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]<a[j])
				swap(&a[i],&a[j]);
}

int main()
{
	int num,dif,org=1,max=0,min=0,i;
	int x[n]={0};
	printf("please enter a four-digit number:");
	scanf("%d",&num);
	while(org!=dif){
		printf("num=%4d",num);
		org=num;
		printf("  org=%4d",org);
		for(i=0;i<n;i++){
			x[i]=num%10;
			num/=10;
		}
		ascend(x);
		max=min=0;
//generate max
		for(i=0;i<n;i++){
			max=x[n-i-1]+10*max;
		}
		printf("  max=%4d",max);
//generate min
		for(i=0;i<n;i++){
			min=x[i]+10*min;
		}
		printf("  min=%4d",min);
//generate dif
		dif=max-min;
		printf("  dif=%4d",dif);
		if(org!=dif)
			num=dif;
		printf("\n");
	}
	return 0;
}
