#include <stdio.h> 
void mystrcat(char *pa, char *pb) 
{ 
    while (*pa != '\0') pa++; 
    while (*pb != '\0')
    {
        *pa = *pb; 
        pa++;
        pb++;
    }
    *pa = '\0'; 
} 
int main() 
{ 
    char a[90], b[30]; 
    gets(a);  
    gets(b); 
    mystrcat(a, b); 
    printf("\n 链接后的字符串是:%s\n", a); 
    return 0; 
}
