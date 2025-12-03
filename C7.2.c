#include<stdio.h> 
int sub(int *p);//函数声明
int main() 
{ int i ,k; 
for( i=0;i<5;i++) 
{ k= sub(&i); 
 printf("k= %d\n",k); 
} 
return 0; 
} 
int sub(int *p) 
{ static int t=0; 
t=*p +t ; 
return t; 
} 
 