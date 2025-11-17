#include<stdio.h>
int main() 
{ 
    int a[11], i, sum = 0; 
    for (i = 1; i <= 10; i++) 
        scanf("%d", &a[i]); 
    for (i = 1; i <= 10; i++) 
        sum = sum + a[i]; 
    printf("Sum=%d\n", sum); 
    return 0; 
}