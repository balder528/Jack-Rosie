#include <stdio.h> 
int main() 
{ 
    int i, n = 10, a[10]; 
    float av = 0; 
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
        if ((i + 1) % 3 == 0) 
            printf("\n"); 
    } 
    for (i = 0; i < n; i++) 
        av += a[i]; 
    av = av / n; 
    printf("av=%.2f\n", av); 
    return 0; 
}