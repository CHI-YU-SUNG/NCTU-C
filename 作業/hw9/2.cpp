#include<stdio.h>
int main()
{
	float n1,n2,n3,sump,avgp;
	void sumavg(float,float,float,float *,float *);
	printf("Inpput 3 number\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	sumavg(n1,n2,n3,&sump,&avgp); //���O sumavg(...,*sump,*avgp) 
	
	return 0;
}

void sumavg(float n1,float n2,float n3,float *sump,float *avgp)//�ন�a�} 
{
	*sump=n1+n2+n3;
	*avgp=*sump/3.;
	printf("sum: %f\navg: %f",*sump,*avgp);
	
}
