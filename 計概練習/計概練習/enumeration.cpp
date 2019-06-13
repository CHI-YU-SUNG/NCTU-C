#include<stdio.h>
int main()
{
	int i;
	enum sport {ABALL=3,BBALL,CBALL=3,DBALL
	};
	
	printf("%-3d",ABALL);
	printf("%-3d",BBALL);
	printf("%-3d",CBALL);
	printf("%-3d\n\n",DBALL);
	
	sport mySport,yourSport;
	mySport=BBALL;
	
	printf("%-3d",ABALL);
	printf("%-3d",BBALL);
	printf("%-3d",CBALL);
	printf("%-3d\n\n",DBALL);
	
	printf("%-3d",mySport);
	printf("%-3d",yourSport);
	return 0;
}
