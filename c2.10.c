#include <stdio.h>

int main() {
    // 定义一个双精度浮点数变量来存储和
    double sum = 0;

    // 计算 1/2 + 1/3 + 1/4 的和
    sum = 1.0 / 2 + 1.0 / 3 + 1.0 / 4;

    // 输出结果，保留六位小数
    printf("1/2 + 1/3 + 1/4 的和是: %.6lf\n", sum);

    return 0;
}