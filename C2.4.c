#include <stdio.h> 
int main() 
{ float x,y; 
 scanf("%f",&x); 
 printf("\n2.4*x-1/2=%f",2.4*x-1.0/2); 
 printf("\nx%%2/5-x=%f",(int)(x)%2/5-x); 
 printf("\n(x-=x*10,x/=10)=%d\n",(x-=x*10,x/=10)); 
 return 0;
}