#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1 = 87;
	int n2 = 123;
	int x;
	FILE *fp;
	fp = fopen("cpfrom.txt","w");
	if(!fp){
		printf("file is not opened1\n");
		exit(1);//has to include <stdlib.h>
	}
	fprintf(fp,"%d  \n%d  ",n1,n2);
	fclose(fp);
	
	FILE *fp1;
	fp1 = fopen("cpto.txt","w");
	if(!fp1){
		printf("file is not opened2\n");
		exit(1);//has to include <stdlib.h>
	}
	fp = fopen("cpfrom.txt","r");//remember to open again after closing it
	while(!feof(fp) && fscanf(fp,"%d",&x)!=EOF){
		printf("%d  \n",x);
		fprintf(fp1,"%d  \n",x);
	}
		
	fclose(fp1);
	printf("file is copy");
	return 0;
}
