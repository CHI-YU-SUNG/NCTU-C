#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	srand(time(NULL));
	int i=1,count=0;
	double pro,x,y;
	printf("Two numbers of x&y\n");
	
		for(i=1;i<=1000;i++){
			x=rand()+1;
			x=fmod(x,32767);
			x/=32767;
			y=rand()+1;	
			y=fmod(y,32767);
			y/=32767;
			if( pow(x,2) + pow(y,2) <= 1)
				count++;
			else
				NULL;
		}
		pro=count/1000.;
		printf("the proportion is = %lf\n",pro);
		printf("4*pro = %lf\n",pro*4);
	return 0;
}
