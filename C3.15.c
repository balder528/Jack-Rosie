#include <stdio.h>

int main() {
    int num;
    printf("请输入一个不多于 5 位的正整数：");
    scanf("%d", &num);

    int digitCount;
    if (num < 10) {
        digitCount = 1;
    } else if (num < 100){
        digitCount = 2;
    } else if (num < 1000) {
        digitCount = 3;
    } else if (num < 10000) {
        digitCount = 4;
    } else {
        digitCount = 5;
    }
    printf("它是 %d 位数\n", digitCount);

    printf("每一位数字分别为：");
    int temp = num;
    int digits[5];
    for (int i = 0; i < digitCount; i++) {
        digits[i] = temp % 10;
        temp /= 10;
    }
    for (int i = digitCount - 1; i >= 0; i--){
        printf("%d ", digits[i]);
    }
    printf("\n");

    printf("逆序打印各个数字：");
    for (int i = 0; i < digitCount; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");

      return 0;
    }
