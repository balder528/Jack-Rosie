#include<stdio.h>
int main()
{ char c,s[]="ABCCDA"; 
 int k; 
 for(k=1;(c=s[k])!='\0';k++) 
{ switch(c) 
 { case 'A':putchar('&');continue; 
 case 'B':++k;break; 
 default: putchar('*'); 
 case 'C':putchar('&');continue; 
 } 
 putchar('#'); 
 }
}