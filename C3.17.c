
#include <stdio.h>

int main() {
    int num;
    printf("请输入一个三位的正整数：");
    scanf("%d", &num);

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    if (num == hundreds * hundreds * hundreds + tens * tens * tens + units * units * units) {
        printf("%d 是水仙花数。\n", num);
    } else {
        printf("%d 不是水仙花数。\n", num);
    }

    return 0;
}