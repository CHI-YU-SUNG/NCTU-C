#include<stdio.h> 
#include<Stdlib.h> 

main() 
{ 
 int a; 
 printf("Program to convert Fahrenheit to Celsius."); 
 printf("Fahrenheit temperature:"); 
 scanf("%d",&a); 
 printf("Celsius equivalent:%d",(a-32)*5/9); 
 system("pause"); 
 return 0; 
}
