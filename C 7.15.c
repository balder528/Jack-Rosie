#include <stdbool.h>
#include <stdio.h>

bool search(int a[], int n, int key) {
    int *p;
    for (p = a; p < a + n; p++) {
        if (*p == key) {
            return true;
        }
    }
    return false;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int key = 3;
    if (search(arr, 5, key)) {
        printf("找到了键 %d\n", key);
    } else {
        printf("未找到键 %d\n", key);
    }
    return 0;
}