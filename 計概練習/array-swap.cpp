#include<stdio.h>
int main()
{
	void array_swap_colume(int [4][4]);
	void array_swap_row(int [4][4]);
	void swap(int *,int *);
	int a[4][4]={{1,2,3,4},
				{5,6,7,8},
				{9,10,11,12},
				{13,14,15,16}};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n\n");
	
	array_swap_colume(a);
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	printf("\n\n");
	array_swap_colume(a);
	
	array_swap_row(a);
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}

void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}

void array_swap_colume(int a[4][4])
{
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++)
			swap(&a[i][j],&a[i][3-j]);
	}
}

void array_swap_row(int a[4][4])
{
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++)
			swap(&a[j][i],&a[3-j][i]);
	}
}
