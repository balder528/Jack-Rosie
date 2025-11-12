#include <stdio.h> 
int main() 
{ int s=0,t,i,j; 
for(i=1;i<=3;i++) 
{ t=1; 
   for(j=1;j<=2*i-1;j++) 
      t=t*j; 
    s=s+t; 
} 
printf("%-5d\n",s); 
return 0;
}