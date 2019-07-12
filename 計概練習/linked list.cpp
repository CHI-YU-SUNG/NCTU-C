#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n;
	srand(time(NULL));//ramdom access each element
	printf("Please enter how long the string is :\n");
	scanf("%d",&n);//length of the string
	char *string;//char pointer
	string = (char *)malloc(n+1);//allocate the memory
	if(string == NULL)//out of memory
		exit(1);
	for(int i=0;i<n;i++)
		string[i] = rand()%26 + 'a';
	string[n] = '\0';//terminate
	printf("the string is : %s\n",string);
	printf("size is : %u\n",sizeof(string));
	free(string);//deallocate
	string = (char *)calloc(n,sizeof(int));
	if(string == NULL)
		exit(1);
	for(int i=0;i<n;i++)
		string[i] = i+'a';
	string[n] = '\0';
	printf("the string is : %s\n",string);
	printf("size is : %u\n",sizeof(string));
	free(string);//deallocate
	return 0;
}
