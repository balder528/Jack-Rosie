#include<stdio.h> 
int main() 
{ 
    int a[4] = {0}; 
    int i; 
    for (i = 0; i < 4; i++) 
        scanf("%d", &a[i]); 
    for (i = 0; i < 4; i++) 
        a[0] = a[0] + a[i]; 
    printf("%d ", a[0]); 
    return 0; 
}