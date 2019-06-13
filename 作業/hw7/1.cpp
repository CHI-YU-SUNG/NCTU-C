#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num,i,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	srand(time(NULL));
	
	printf("亂數投擲die\n\n");
	for(i=1;i<=6000;i++)
	{
		num=rand()%6+1;//重要 
		switch(num)
		{
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
			case 3:
				c3++;
				break;
			case 4:
				c4++;
				break;
			case 5:
				c5++;
				break;
			case 6:
				c6++;
				break;
			default:
				break;
			
		}
	}
	printf("output: \n");
	printf("1: %3d\n",c1);
	printf("2: %3d\n",c2);
	printf("3: %3d\n",c3);
	printf("4: %3d\n",c4);
	printf("5: %3d\n",c5);
	printf("6: %3d\n",c6);
	

	
	return 0;
}
