#include<stdio.h>
int main()
{
	int col,row,spa=0,num=1,n,i=0;
	//��*�٧Ϊ��ϧΤ�_�ӡA�h�@��i���ܼơA�Ψӱ���Ʀr�C 
	scanf("%d",&n);
	
		for(row=1;row<=2*n-1;row++){
			num=1;
			i=1;
			for(col=1;col<=2*n-1;col++){
				if(spa+num<n)
					printf("  ");
				else
					if(col<n){
						printf("%2d",i);
						i++;
					}
					else{
						printf("%2d",i);
						i--;
					} 
				if(col<n)
					num++;
				else
					num--;
			}
			if(row<n)
				spa++;
			else{
				spa--;
			}
			printf("\n");
		}
	return 0;
} 
