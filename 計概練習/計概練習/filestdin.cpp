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
	//scanf(" %s",filename);---------�����D
	//puts(filename)---------�����D 
	fp = fopen(filename,"w");
	if(!fp){
		printf("Can not open file\n");
		exit(1);
	}
	printf("enter the content :\n");
	while( (ch=getc(stdin)) != EOF ){//ctrl-Z  or  ctrl-D  or  ctrl-C 
		if(ch!='\r')
			putc(ch,fp);//�`�N�Ϊk   
		else
			putc('\n',fp);
	}
	fclose(fp);
	return 0;
}
