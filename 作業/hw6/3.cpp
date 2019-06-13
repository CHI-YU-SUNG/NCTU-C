#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x,y;
	scanf("%f %f",&x,&y);
	if(x>0&&y>0)
		printf("(%f,%f)is in the first quadrant\n",x,y);
	if(x>0&&y<0)
		printf("(%f,%f)is in the second quadrant\n",x,y);
	if(x<0&&y>0)
		printf("(%f,%f)is in the third quadrant\n",x,y);
	if(x<0&&y<0)
		printf("(%f,%f)is in the forth quadrant\n",x,y);
	if(x==0 && y==0)
		printf("(%f,%f)is the origin\n",x,y);
	if(x==0&&y!=0 )
		printf("(%f,%f)is on the y-axis\n",x,y);
	if(y==0&&x!=0)
		printf("(%f,%f) is on the x-axis\n",x,y);
	
	
	
	
	return 0;	
}
