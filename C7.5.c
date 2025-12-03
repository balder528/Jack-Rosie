#include <stdio.h> 
#include <string.h> 
int main() 
{char b1[8]="abcdef",b2[8],*pb=b1+4; 
while (--pb>=b1) 
{strcpy(b2,pb);puts(b2);} 
printf("%d\n",strlen(b2)); 
return 0; 
}