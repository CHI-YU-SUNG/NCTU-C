#include<stdio.h>
int main()
{
	int *v,*oned,**twod;//both variable and 1-D array need *
//dynamic variable
	v=new int ;
	*v=0;
	printf("%2d\n\n",*v);
//dynamic 1-D array
	oned=new int [2];//不能馬上 initialize 
	for(int i=0;i<2;i++)
		oned[i]=3;
	printf("%2d %2d\n\n",oned[0],oned[1]);
//dynamic 2-D array
	twod=new int *[3];//記得加* 
	for(int i=0;i<3;i++)
		twod[i]=new int [3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			twod[i][j]=i*j; 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%2d",twod[i][j]);
		printf("\n");
	}
	printf("\n");
//delete one-D
	delete []oned;
//delete tow-D
	for(int i=0;i<3;i++)
		delete []twod[i];
	delete []twod;
//output oned value
	printf("%2d %2d\n\n",oned[0],oned[1]);
//output twod value
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%2d",twod[i][j]);
		printf("\n");
	}
	return 0;
}

