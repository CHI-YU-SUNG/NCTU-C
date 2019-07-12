#include<stdio.h>
#define m 3
#define n 4
int main()
{
	int x[m][n]={{1,2,3,4},
				 {5,6,7,8},
				 {9,10,11,12}};
	 for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("%3d",x[i][j]);
		printf("\n");
	}
	printf("\n-----swap-----\n\n");
	void swap(int *,int *);
	for(int i=0;i<m;i++)
		for(int j=0;j<n/2;j++)
			swap(&x[i][j],&x[i][n-j-1]);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			printf("%3d",x[i][j]);
		printf("\n");
	}
	return 0;
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
