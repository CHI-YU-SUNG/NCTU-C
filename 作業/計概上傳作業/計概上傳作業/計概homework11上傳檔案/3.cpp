#include<stdio.h>
int main()
{
//1-a
	int data,above=0,below=0,count=0,n=0;
	int a[10]={0},data_array[50]={0};
	double ave,sum=0;
	while(scanf("%d",&data)){
		sum+=data;
		count++;
		data_array[n]=data;
		switch(data){
			case -1:
				break;
			case 0 ... 9:
				a[0]++;
				break;
			case 10 ... 19:
				a[1]++;
				break;
			case 20 ... 29:
				a[2]++; 
				break;
			case 30 ... 39:
				a[3]++;
				break;
			case 40 ... 49:
				a[4]++;
				break;
			case 50 ... 59:
				a[5]++;
				break;
			case 60 ... 69:
				a[6]++;
				break;
			case 70 ... 79:
				a[7]++;
				break;
			case 80 ... 89:
				a[8]++;
				break;
			case 90 ... 100:
				a[9]++;
				break;
				default :;
		}
		n++;
		if(data == -1)
			break;
	}
	ave=(sum+1)/(count-1);
	printf("MEAN : %lf\n",ave); 
	
//1-c
	for(int i=0;i<count;i++){
		if(data_array[i]>ave)
			above++;
		else if(data_array[i]<ave)
			below++;
	}
	printf("ABOVE MEAN : %d\nBELOW MEAN : %d\n\n\n",above,below-1);
	
//1-b
	for(int i=0;i<10;i++){
		if(i<=9)
			printf("%d~ %d9 :",i*10,i);
		else
			printf("90~ 100 :");
		for(int j=0;j<a[i];j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
