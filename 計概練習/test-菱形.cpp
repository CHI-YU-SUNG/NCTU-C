#include<stdio.h>
#include<conio.h>
int main()
{
	int row,column,space,letter;//i:计 
	//space:北 
	//letter:北璣ゅ 
	//じ北 
	
	//column:北材碭じ赣块ぐ或 
	//row:北材碭  
	space=0;
	
	for(row=0;row<13;row++)
	{
		letter=0;
		for(column=0;column<13;column++)//column:︽计 
		{
			if(space+letter<7)//space,letter:北㎝璣ゅAABBCCDCCBBAA 
			//									   		   AABBCC CCBBAA 
			//									 		   AABBC   CBBAA 
			//									 		   AABB     BBAA 
			//						 					   AAB       BAA 
				printf("%c",65+letter/2);//(letter/2):璣ゅダ璶狡块–块ㄢ碞  
			else
				printf(" ");
			if(column<6)//column,letter:北材碭︽璣ゅ块 ,AABBCCDCCBBAA 
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
