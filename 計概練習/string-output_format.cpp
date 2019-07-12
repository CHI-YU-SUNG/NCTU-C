#include<stdio.h>
int main()
{
	char s1[5]="test";
	char s2[5]={'s','h','i','t','\0'};
	char s3[5]={'s','h','i','t','\0'};
	printf("s1 = %s\n",s1);
	
	printf("s2 = ");
	for(int i=0;i<5;i++)
		printf("%c",s2[i]);
	printf("\n");
	
	printf("s2 = %s\n",s2);
	
	printf("s1 = ");
	for(int i=0;i<5;i++)
		printf("%c",s1[i]);
	printf("\n");
	
	printf("s3 = ");
	for(int i=0;i<5;i++){
		printf("%s",s3);
		printf("\n");
	}
	return 0;
}
