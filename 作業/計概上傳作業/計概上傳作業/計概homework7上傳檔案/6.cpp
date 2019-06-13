#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int x,y;
	char yn;
	srand(time(0));
	while(1)
	{
		printf("ramdomly choose one card\n");
		y=rand()%13+1;
			switch(y)
			{
				case 1:
					printf("Ace of");
					break;
				case 2:
					printf("Two of");
					break;
				case 3:
					printf("Three of");
					break;
				case 4:
					printf("Four of");
					break;
				case 5:
					printf("Five of");
					break;
				case 6:
					printf("Six of");
					break;
				case 7:
					printf("Seven of");
					break;
				case 8:
					printf("Eight of");
					break;
				case 9:
					printf("Nine of");
					break;
				case 10:
					printf("Ten of");
					break;
				case 11:
					printf("Jack of");
					break;
				case 12:
					printf("Queen of");
					break;
				case 13:
					printf("King of");
					break;
				default: ;
			}
		x=rand()%4+1;
			switch(x)
			{
				case 1:
					printf(" Clubs\n\n");
					break;
				case 2:
					printf(" Diamond\n\n");
					break;
				case 3:
					printf(" Hearts\n\n");
					break;
				case 4:
					printf(" Spades\n\n");
					break;
				default: ;
			}
			printf("If you want to choose next card randomly,please enter y.\n");
			printf("Otherwise,please enter n\n");
		scanf(" %c",&yn);
		if(yn == 'y' || yn == 'Y')
		{
			system("cls");
			continue;
		}
		else if(yn == 'n' || yn == 'N')
			break;
		else
			printf("error!!\nPlease input y or n");
	}	
	return 0;
}
