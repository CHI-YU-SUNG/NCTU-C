#include<stdio.h>
#include<conio.h> 
int main()
{
	float x,y,z;
	printf("Please input three numbers : \n");
	scanf("%f %f %f",&x,&y,&z);
	printf("x=%f \ny=%f \nz=%f\n",x,y,z);
	
		x<=y && x<=z?(printf("x <= ")):(y<=z?(printf("y <= ")):printf("z <= "));
		if(x<=y && x<=z){
			y<=z?(printf("y <= z")):(printf("z <= y"));
		}
		if(y<=z && y<=x){
			x<=z?(printf("x <= z")):(printf("z <= x"));
		}
		if(z<=x && z<=y){
			x<=y?(printf("x <= y")):(printf("y <= x"));
		}
					
	return 0;
}
