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
	printf("�Ĥ@�ؤ覡�ΤF��ΡA��h�ͪ��s�ɡA�諬������|������ϧΪ����סA�Ϩ�󱵪�쥻�����n�C\n");
	printf("�ĤG�ؤ覡�ΤF�x��A���M��h�ͪ��s�]�i�����ܱ���쥻�����n�A����h��j�N���D���M�Ĥ@�ؤ覡�٬O���t�Z���A��ۤ����A�o�{�Ĥ@�ؤ覡������C");	
		
	return 0;
}
