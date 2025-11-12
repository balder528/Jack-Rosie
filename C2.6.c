#include <stdio.h> 
int main( ) 
{ 
    char a;  // 变量的定义
    int b;
    printf("请输入一个字符："); 
    scanf("%c", &a); 
    b = (int)a; 
    printf("\n\n%c 的 ASCⅡ码为%d\n", a, b); 
    return 0;
}