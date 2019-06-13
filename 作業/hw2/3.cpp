#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number;
	printf(" Put an integer between 7 and 9 digits long: ");
	scanf("%d",&number);
	if(number>=1000000);
	{
		if(number<=999999999);
		{
			printf("right most digit: %d\n",number%1000/100);
			printf("commas between every third digit starting from the right: %d,%d,%d",number/1000000,number/1000%1000,number%1000);
		}
	}	
			
	return 0;
}
