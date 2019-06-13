#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	//5-a
	{
	printf("5 - a\n");
	int dir,x=0,i,countr=0,countl=0;
	srand(time(NULL));
		while(countr+countl<1000)
		{
			dir=rand()%2+1;
			if(dir%2 == 0)
			{
				x-=1;
				if(x == -2)
					x=-4;
				if(x == -5)
				{
					countl++;
					x=0;
				}
			}
			if(dir%2 == 1)
				x+=1;
			if(x == -2)
				x=-4;
			if(x == 4)
			{
				countr++;
				x=0;
			}
		}
		printf("exit from R4=%d \nexit from L5=%d\n\n\n",countr,countl);
	}
	//5-b
	{
	printf("5 - b\n");
	int dir,x=0,i,countr=0,countl=0,min=0,sot=0,ave;
	srand(time(NULL));
		while(countr+countl<1000)
		{
			dir=rand()%2+1;
			if(dir%2 == 0)
			{
				x-=1;
				min++;
				if(x == -2)
				{
					min+=2;
					x=-4;	
				}
				if(x == -5)
				{
					countl++;
					sot+=min;
					x=0;
					min=0;
				}
			}
			if(dir%2 == 1)
			{
				x+=1;
				min++;
			}
			if(x == 4)
			{
				countr++;
				sot+=min;
				x=0;
				min=0;
			}
		}
		ave=sot/1000.;
		printf("On the average,the dog stay in the tunnel %d minutes\n\n\n",ave);
	}
	//5-c
	{
	printf("5 - c\n");
	int dir,x=0,i,countr=0,countl=0;
	srand(time(NULL));
		while(countr+countl<1000)
		{
			dir=rand()%2+1;
			if(dir%2 == 0)
			{
				x-=1;
				if(x == -2)
					x=-4;
				if(x == -5)
				{
					countl++;
					x=0;
				}
			}
			if(dir%2 == 1)
				x+=1;
			if(x == 4)
			{
				countr++;
				x=0;
			}
		}
		printf("exit from R4=%d \nexit from L5=%d\n\n\n",countr,countl);
	}
	return 0;
}



