#include <stdio.h>

// 计算最大公约数
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 计算最小公倍数
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int num1, num2;
    printf("请输入两个正整数: ");
    scanf("%d %d", &num1, &num2);

    int greatest_common_divisor = gcd(num1, num2);
    int least_common_multiple = lcm(num1, num2);

    printf("最大公约数: %d\n", greatest_common_divisor);
    printf("最小公倍数: %d\n", least_common_multiple);

    return 0;
}
