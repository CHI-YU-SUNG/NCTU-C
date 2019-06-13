#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	char yn;
	int counta=0,countb=0,countc=0,countd=0,a;
			
			while(scanf("%d",&a))
			{
				switch(a)
				{
					case 80 ... 100:						
						counta++;
						break;
						
					case 70 ... 79:						
						countb++;
						break;
						
					case 60 ... 69:						
						countc++;
						break;
						
					case 0 ... 59:					
						countd++;
						break;					
						
					default: 
						break;		
				}
				printf("choose y or n to continue or stop\n");
				scanf(" %c",&yn);
				//yn=getche();
				if(yn =='n'){
					break;
				}
		
			}
		printf("A:%d B:%d C:%d D:%d",counta,countb,countc,countd);	
	
	return 0;
}
