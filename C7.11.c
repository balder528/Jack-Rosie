#include <stdio.h> 
int main() 
{ 
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; 
    int sum, *p; 
    sum = 0; 
    p = a; 
    while (p < a + 10) 
    {
        sum += *p;
        p++; 
    }
    printf("sum=%d\n", sum); 
    return 0; 
}