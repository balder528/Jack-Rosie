#include <stdio.h>

#define SIZE 15

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int num, i;
    int *p = arr;

    printf("请输入一个数: ");
    scanf("%d", &num);

    for (i = 0; i < SIZE; i++) {
        if (*(p + i) == num) {
            printf("该数在数组中的位置是: %d\n", i + 1);
            return 0;
        }
    }
    printf("No Found\n");
    return 0;
}