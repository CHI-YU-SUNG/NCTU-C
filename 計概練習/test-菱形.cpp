#include<stdio.h>
#include<conio.h>
int main()
{
	int row,column,space,letter;//i:�C�ơC 
	//space:����Ů�C 
	//letter:����^��C 
	//�H�W���r������C 
	
	//column:����ĴX�Ӧr���ӿ�X����C 
	//row:����ĴX�C �C 
	space=0;
	
	for(row=0;row<13;row++)
	{
		letter=0;
		for(column=0;column<13;column++)//column:��ơC 
		{
			if(space+letter<7)//space,letter:����Ů�M�^��AABBCCDCCBBAA�C 
			//									   		   AABBCC CCBBAA�C 
			//									 		   AABBC   CBBAA�C 
			//									 		   AABB     BBAA�C 
			//						 					   AAB       BAA�C 
				printf("%c",65+letter/2);//(letter/2):�]���^��r���n���ƿ�X�A�C��X��ӴN�[�@ �C 
			else
				printf(" ");
			if(column<6)//column,letter:����ĴX�檺�^���X ,AABBCCDCCBBAA�C 
				letter++;
			else
				letter--;
		}
	printf("\n");
	if(row<6)
		space++;
	else
		space--;
	}
	return 0;
} 
