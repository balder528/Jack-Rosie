#include <stdio.h> 
int main() 
{ 
    int k = 100; 
    while(k >= 0) 
    { 
        printf("%d,", k); 
        k--; 
        if ((100 - k) % 10 == 9) printf("\n"); 
    } 
    return 0; 
}