#include <stdio.h> 
 int main() 
 { int x ,y ; 
 scanf("%d",&x); 
 y=x-3; 
 if (x!=0) {
 if (x>0) y=x+3;
 }else{
    y=0;
 }
 printf("y=%d\n" , y); 
 return 0; 
 }