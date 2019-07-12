#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char *filename;
	char ch;
	printf("enter a filename :\n");
	filename = new char[80];
	gets(filename);
	//scanf(" %s",filename);---------有問題
	//puts(filename)---------有問題 
	fp = fopen(filename,"w");
	if(!fp){
		printf("Can not open file\n");
		exit(1);
	}
	printf("enter the content :\n");
	while( (ch=getc(stdin)) != EOF ){//ctrl-Z  or  ctrl-D  or  ctrl-C 
		if(ch!='\r')
			putc(ch,fp);//注意用法   
		else
			putc('\n',fp);
	}
	fclose(fp);
	return 0;
}
