#include<stdio.h>
#include<math.h>
double power(int x,int y)
{
	if(y==0)
		return 1;
	else if(y==1)
		return x;
	else if(y>1)
		return (x*power(x,y-1));
	else
		return (1./(x*power(x,-y-1)));
}
int main()
{
	int x,y;
	double product;
	printf("please enter x and y\n");
	scanf("%d %d",&x,&y);
	product=power(x,y);
	printf("the product is = %lf\n",product);
	return 0;
} 
