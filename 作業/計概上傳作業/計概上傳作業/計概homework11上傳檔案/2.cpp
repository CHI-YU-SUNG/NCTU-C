#include<stdio.h>
#define m 4
#define n 3
int main ()
{
	int a[n][m]={{2,1,3,4},{1,2,1,1},{3,1,1,3}};
	int b[m][n]={{1,3,2},{2,1,1},{1,4,2},{1,2,1}};
	int c[n][n]={0};
	int row=0,col=0,i,j=0,sum,rowb=-1;
	for(row=0;row<n;rowb==2?row++:row=row)     //�ѤW��U ����(�~�h�j�鱱��C) 
	{
		sum=0;
		if(rowb==2)
			rowb=0;
		else
			rowb++;
		printf("%d",rowa);
		for(col=0;col<m;col++)
			sum+=a[row][col]*b[col][rowb];      //�C�椺�n  
		c[row][j]=sum;
		printf("%3d\n",c[row][j]);
		if(j==2)                                //�ѥ���k ���� (���h�j�鱱���) 
			j=0;
		else
			j++;
	}
	for(i=0;i<n;i++){                          //  �L�X�x�} 
		for(j=0;j<n;j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
