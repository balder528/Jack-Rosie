
#include<stdio.h> 
int main() 
{ 
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; 
    int k, s, i; 
    float ave; 
    for(i = 0, k = s = 0; i < 10; i++) 
    { 
        if(a[i] % 2 == 0) continue;  // 如果是偶数，跳过本次循环
        s += a[i];  // 累加奇数的值
        k++;  // 奇数个数加1
    } 
    if(k != 0) 
    { 
        ave = (float)s / k;  // 计算奇数的平均值
        printf ("%d,%f\n", k, ave); 
    } 
    return 0; 
} 