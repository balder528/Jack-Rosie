#include <stdio.h>

int sum_array(int a[], int n) {
    int sum = 0;
    int *p;
    for (p = a; p < a + n; p++) {
        sum += *p;
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int result = sum_array(arr, 5);
    printf("数组元素之和为: %d\n", result);
    return 0;
}