#include <stdio.h> 
int main() 
{ 
    int i = 1; 
    while(1) 
    { 
        printf(" %4d ", i);  
        if (i % 10 == 0) printf("\n"); 
        if (i > 100) break; 
        i++;
    } 
    return 0;
}