#include<stdio.h>
int main()
{
	int n1 = 87; 
	float n2 = 3.14f;
	int n3 = 0;
	float n4 = 0;
	FILE *fp ;
	fp = fopen("test.txt","w");
	fprintf(fp,"%d  %f",n1,n2);
	fclose(fp);
	printf("file is created\n");
	
	fp = fopen("test.txt","r");
	fscanf(fp,"%d  %f",&n3,&n4);
	printf("%d %f\n",n3,n4);
	fclose(fp);
	
	printf("%d\n%d\n%d",BUFSIZ,EOF,NULL);
	return 0;
}
