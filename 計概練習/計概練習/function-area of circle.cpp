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
		printf("%10.4lf\n",a);//print�X�Ӫ��Ʀr�p�G�`��ƶW�L10��]�|�ӦL�C 
	}
	return 0;
} 
