#include <stdio.h> 
int main() 
{ 
    char str[61], *p; 
    int i; 
    for (i = 0; i < 60; i++) 
    { 
        str[i] = getchar(); 
        if (str[i] == '\n') break; 
    } 
    str[i] = '\0'; 
    p = str; 
    while (*p)
        putchar(*p++); // 输出 p 指向单元的内容，并使得 p 指针指向下一个单元。
    return 0; 
}