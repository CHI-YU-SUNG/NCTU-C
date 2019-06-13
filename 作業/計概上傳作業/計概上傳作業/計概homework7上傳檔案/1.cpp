#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int num,i,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
	for(i=1;i<=6000;i++)
	{
		num=rand()%6+1;
		switch(num)
		{
			case 1:
				count1++;
				break;
			case 2:
				count2++;
				break;
			case 3:
				count3++;
				break;
			case 4:
				count4++;
				break;
			case 5:
				count5++;
				break;
			case 6:
				count6++;
				break;
			default: ;
		}
	}
	printf("1 = %3d\n2 = %3d\n3 = %3d\n4 = %3d\n5 = %3d\n6 = %3d",count1,count2,count3,count4,count5,count6);
	
	return 0;
} 
