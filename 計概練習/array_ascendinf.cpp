#include<stdio.h>
#include<conio.h>
#define m 6
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

int main()
{
	int a[m]={0};
	printf("please enter 6 integers : ");
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(a[i]>a[j]) 
				swap(&a[i],&a[j]);
		}
	}
	for(int i=0;i<m;i++)
		printf("%d  ",a[i]);
	return 0;
}
