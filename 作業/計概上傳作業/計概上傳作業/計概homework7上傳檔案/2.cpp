#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int num1,num2,sum=0,i=1,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0;
	int thr,count8=0,count9=0,count10=0,count11=0,count12=0;
	
	printf("please input how many times you wat to throw\n");
	printf("To simulate more precisely.\n");
	printf("please input a number bigger than 100");
	scanf("%d",&thr);
	while(i<=thr)
	{
		num1=rand()%6+1;
		num2=rand()%6+1;
		sum=num1+num2;
		switch(sum)
		{
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
			case 7:
				count7++;
				break;
			case 8:
				count8++;
				break;
			case 9:
				count9++;
				break;
			case 10:
				count10++;
				break;
			case 11:
				count11++;
				break;
			case 12:
				count12++;
				break;
			default: ;
		}
		i++;
	}
	printf("count5=%d count6=%d count7=%d count8=%d count9=%d\n\n",count5,count6,count7,count8,count9);
	if(count7>count6 && count7>count8)
		printf("7 is most likely to be thrown\n");
	else if(count6>count7 && count6>count7)
		printf("6 is most likely to be thrown\n");
	else
		printf("8 is most likely to be thrown\n");
	return 0;
}
