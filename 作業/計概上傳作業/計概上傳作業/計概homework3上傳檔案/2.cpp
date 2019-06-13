#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	system("chcp 950");
	
	printf("\n	ASCII chart");
	char i='0';
	int k=0;
	
		
		printf("\n\n===========================================\n");
		
		i=0;
		printf("|| %3d %3c ",i,i);


			for(i=1;i<=6;i++)
			{
				(i%4)==3?(printf("| %3d %3c || \n|",i,i)):(printf("| %3d %3c ",i,i));
			}

			
			for(i=7;i<=13;i++)
			{
				(i%4)==3?(printf("| %3d %3c || \n|",i,32)):(printf("| %3d %3c ",i,32));
			}

			
			for(i=14;i<127;i++)
			{
				(i%4)==3?(printf("| %3d %3c || \n|",i,i)):(printf("| %3d %3c ",i,i));
			}

				
		i==127?(printf("| %3d %3c ||",i,i)):NULL;
		printf("\n===========================================\n");
	
	getch();
	return 0;
}
