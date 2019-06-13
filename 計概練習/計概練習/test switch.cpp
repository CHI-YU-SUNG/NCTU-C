#include<stdio.h>
#include<math.h>
int main()
{
	char yn;
	int counta,countb,countc,countd,a;
			
			while(scanf("%d",&a))
			{
				switch(a)
				{
					case 80 ... 100:
						{
							counta++;
							break;
						}
					case 70 ... 79:
						{
							countb++;
							break;
						}
					case 60 ... 69:
						{
							countc++;
							break;
						}
					case 0 ... 59:
						{
							
							countd++;
							if(a<0)
								countd--;
							break;
						}
						
					default: ;
				
					
				}
				scanf("%c",&yn);
				if(yn!='y')
					break;
			}
		printf("A:%d B:%d C:%d D:%d",counta,countb,countc,countd);	
	
	return 0;
}
