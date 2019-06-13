#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int G,O,T,D;
	
			for(G=0;G<=9;G++)
			{
				for(O=0;O<=9;O++)
				{
					for(T=0;T<=9;T++)
					{
						for(D=0;D<=9;D++)
						{
							(400*T+44*O)==(1000*G+110*O+D) && O!=T && O!=D && O!=G && T!=D && T!=G && D!=G ?(printf("O=%d,T=%d,D=%d,G=%d\n\n",O,T,D,G)):NULL;
							
						}
					}
				}			
			}
	
	return 0;
}
