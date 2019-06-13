#include<stdio.h>
int main()
{
	int n1 = 16;// declare variable
	float n2 = 3.141592654;// declare variable
	int n3 = 0, n4 = 0;
	FILE *fp;//declare a file variable named fp
	fp = fopen("data.txt","w");//fopen: open a file named "data",to write
	fprintf(fp,"%d \n%f",n1,n2);//Formatted write -> text file
	fp = fopen("data1.txt","r");
	fscanf(fp,"%d %d ",&n3,&n4);
	fclose(fp);
	fprintf(stdout,"the program is end\n");
	return 0;
} 
