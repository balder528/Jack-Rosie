include <stdio .h>
int main() 
{
    int i, j, k, n = 0; 
    for (i = 0; i <= 20; i++) 
        for (j = 0; j <= 50; j++) 
        { 
            for(k = 0; k <= 100; k++)
                if (i * 5 + j * 2 + k * 1 == 100)
                { 
                    n++;
                    printf(" 第%d 种: %3d %3d %3d", n, i, j, k); 
                    if(n % 3 == 0) printf("\n"); 
                } 
        } 
    return 0; 
}