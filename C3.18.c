#include <stdio.h>

int main() {
    double p;
    double salary = 500;
    printf("请输入该月所接工程的利润：");
    scanf("%lf", &p);

    if (p <= 1000) {
        // 没有提成
    } else if (p <= 2000) {
        salary += (p - 1000) * 0.1;
    } else if (p <= 5000) {
        salary += 1000 * 0.1 + (p - 2000) * 0.15;
    } else if (p <= 10000) {
        salary += 1000 * 0.1 + 3000 * 0.15 + (p - 5000) * 0.2;
    } else {
        salary += 1000 * 0.1 + 3000 * 0.15 + 5000 * 0.2 + (p - 10000) * 0.25;
    }

    printf("该员工该月的薪水为：%.2f 元\n", salary);

    return 0;
}
