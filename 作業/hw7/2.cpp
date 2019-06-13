#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int sum=0,num1,num2,thr,i=1,c2=0,c3=0,c4=0,c5=0,c6=0;
	int c7=0,c8=0,c9=0,c10=0,c11=0,c12=0;
	printf("輸入投擲次數(大於100次): \n");
	scanf("%d",&thr);
	
	
	i=1;
	while(i<=thr)
		{
			num1=rand()%6+1;
			num2=rand()%6+1;
			sum=num1+num2;
			switch(sum)
			{
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
				case 6:
					c6++;
					break;
				case 7:
					c7++;
					break;
				case 8:
					c8++;
					break;
				case 9:
					c9++;
				case 10:
					c10++;
					break;
				case 11:
					c11++;
					break;
				case 12:
					c12++;
					break;
				default:
					break;
			}
			i++; 
		}
	
	printf("4: %d\n",c4);
	printf("5: %d\n",c5);
	printf("6: %d\n",c6);
	printf("7: %d\n",c7);
	printf("8: %d\n",c8);
	printf("9: %d\n",c9);
	
	
	if(c7>c6&&c7>c8)
		printf("7 is most likely number");
	else if(c6>c5&&c6>c7)
		printf("6 is most likely number");
	else
		printf("8 is most likely number");
	
	return 0;
 } 
