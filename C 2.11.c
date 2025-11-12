#include <stdio.h>
#define PI 3.1415926

int main() {
    double radius = 5;
    double circumference, area;

    // 计算圆的周长
    circumference = 2 * PI * radius;

    // 计算圆的面积
    area = PI * radius * radius;

    // 输出圆的周长，精确到小数点后 3 位
    printf("圆的周长为: %.3lf\n", circumference);

    // 输出圆的面积，精确到小数点后 3 位
    printf("圆的面积为: %.3lf\n", area);

    return 0;
}