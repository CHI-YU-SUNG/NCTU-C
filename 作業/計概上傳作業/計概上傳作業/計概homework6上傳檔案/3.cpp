#include<stdio.h>
int main()
{
	float x,y;
	printf("Please input a x-y coordinate of a point in a Cartesian plane : \n\n");
	scanf("%f %f",&x,&y);
	
		x==0 && y==0?(printf("is the origin\n")):(x==0 && y!=0?(printf("is on the y-axis\n")):NULL);
		y==0 && x!=0?(printf("is on the x-axis\n")):NULL;	
		x*y<0?(x>0?(printf("is on the forth quadrant\n")):(printf("is on the second quadrant\n"))):NULL;
		x*y>0?(x>0?(printf("is on the first quadrant\n")):(printf("is on the third quadrant\n"))):NULL;
	
	return 0;
}
