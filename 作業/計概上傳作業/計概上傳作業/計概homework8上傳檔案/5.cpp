#include<stdio.h>
#include<conio.h>
int year;
int main()
{
	int month=1,day=0,i,j,spa,firmonspa;
	printf("Please input a year\n");
	scanf("%d",&year);
	printf("Year is %d\n\n",year);
	printf("calender of the year:\n\n");
	int gos(float);
	i=(year + gos((year-1)/4.) - gos((year-1)/100.) + gos((year-1)/400.));
	int days(int,int);
	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
			for(firmonspa=1;firmonspa<=(i%7)*4;firmonspa++)
				printf("%c",32);
			for(month=1;month<=12;month++)
			{
				j=((i%7)-1+days(month,1))%7*4;
				printf("\n-----------------------------\n\n           Month %d\n",month);
				printf(" Sun Mon Tue Wed Thu Fri Sat\n");
				if(month<=7)
				{
					switch(month%2)
					{
						case 1:
							for(spa=1;spa<=j;spa++)
								printf("%c",32);
							for(day=1;day<=31;day++)
							{
								printf("%4d",day);
								if(((i%7)+days(month,day))%7==0)
									printf("\n");
							}
							break;
						case 0:
							if(month!=2)
							{
								for(spa=1;spa<=j;spa++)
									printf("%c",32);
								for(day=1;day<=30;day++)
								{
									printf("%4d",day);
									if(((i%7)+days(month,day))%7==0)
										printf("\n");
								}
								
							}
							else
							{
								if(year%4==0 && year%100!=0 || year%400==0)
								{
									for(spa=1;spa<=j;spa++)
										printf("%c",32);
									for(day=1;day<=29;day++)
									{
										printf("%4d",day);
										if(((i%7)+days(month,day))%7==0)
											printf("\n");											
									}
								}
								else
								{
									for(spa=1;spa<=j;spa++)
										printf("%c",32);
									for(day=1;day<=28;day++)
									{
										printf("%4d",day);
										if(((i%7)+days(month,day))%7==0)
											printf("\n");											
									}
								}
							}
							break;
					}
				}
				else
				{
					switch(month%2)
					{
						case 0:
							for(spa=1;spa<=j;spa++)
								printf("%c",32);
							for(day=1;day<=31;day++)
							{
								printf("%4d",day);
								if(((i%7)+days(month,day))%7==0)
									printf("\n");
							}
							break;
						case 1:
							for(spa=1;spa<=j;spa++)
								printf("%c",32);
							for(day=1;day<=30;day++)
							{
								printf("%4d",day);
								if(((i%7)+days(month,day))%7==0)
									printf("\n");
							}
							break;
					}
				}
			}
	return 0;
} 
int gos(float x)
{
	int num;
	if(x - (int)x == 0)
		return (x-1);
	else
		return ( (int)x );
}
int days(int month,int day)
{
	int num=0;
	switch(month-1)
	{
		case 11:
			num+=30;
		case 10:
			num+=31;
		case 9:
			num+=30;
		case 8:
			num+=31;
		case 7:
			num+=31;
		case 6:
			num+=30;
		case 5:
			num+=31;
		case 4:
			num+=30;
		case 3:
			num+=31;
		case 2:
			if(year%4==0 && year%100!=0 || year%400==0)
				num+=29;
			else
				num+=28;
		case 1:
			num+=31;
		case 0:
			NULL;
		default: ;
	}
	num+=day;
	return (num);
}
