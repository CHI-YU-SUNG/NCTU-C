/* hw15_9.c */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{  
   int a=159;
   int b=0147;
   int c=0x618A;
    
   printf("%d的八進位為%o, 十六進位為%x\n",a,a,a);
   printf("%o的十進位為%d, 十六進位為%x\n",b,b,b);
   printf("%X的八進位為%o, 十進位為%d\n",c,c,c); 
   
   system("pause");
   return 0;
}

/* output----------------------------
159的八進位為237, 十六進位為9f
147的十進位為103, 十六進位為67
618A的八進位為60612, 十進位為24970
-----------------------------------*/
