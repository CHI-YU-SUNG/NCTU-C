#include<stdio.h>
#include<math.h>
double area(int r)
{
	#define pi 3.1415926;
	double area;
	area=pow(r,2)*pi;
	return area;
}

int main()
{
	int r;
	double a;
	while(scanf("%d",&r)){
		a=area(r);
		printf("%10.4lf\n",a);//print出來的數字如果總格數超過10格也會照印。 
	}
	return 0;
} 
