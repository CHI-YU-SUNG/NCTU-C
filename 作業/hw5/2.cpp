
#include<stdio.h>
main()
 {
   int n;
   float x;
   double sum,term,s=1;
   printf("input x:");
   scanf("%f",&x);
   sum=x;
   term=x;
   for(n=1;term>=1e-8;n+=2)
    {
     term*=x*x/((n+1)*(n+2));
     s*=-1;
	 sum+=term*s;
     
     
    }
    
    printf("sin(x)=%10.8f\n",sum);
   }
