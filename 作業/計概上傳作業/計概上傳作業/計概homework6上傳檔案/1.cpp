#include<stdio.h>
int main()
{
//1-1
	{
	double x=0.1,area=0,y,fa,fb,sum=0;
	float h=0.1;
	int a=0,b=10;
	printf("1 - 1\n");
		
		
		fa=8*a*a*a+3*a*a+6*a+10;
		fb=8*b*b*b+3*b*b+6*b+10;
			while(x<10){
				sum+=8*x*x*x+3*x*x+6*x+10;
				x+=0.1;
			}
		
		area=h/2*(fa+fb+2*sum);
		printf("area = %lf\n\n",area);
	
	}
	
//1-2	
	{
	double x=0,area=0,sum=0;
	float h=0.1,fa,fb;
	int a=0,b=10;
	
	printf("1 - 2\n");
	
			
			while(x<10){
				sum+=8*x*x*x+3*x*x+6*x+10;
				x+=0.1;
			}
		
		area=h*sum;
		printf("area = %lf\n\n",area);
	
		
	}
	printf("第一種方式用了梯形，當h趨近於零時，梯型的斜邊會較接近圖形的弧度，使其更接近原本的面積。\n");
	printf("第二種方式用了矩行，雖然使h趨近於零也可讓它很接近原本的面積，但讓h放大就知道它和第一種方式還是有差距的，兩相比較後，發現第一種方式較接近。");	
		
	return 0;
}
