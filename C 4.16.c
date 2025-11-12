#include <stdio.h>

int main() {
    long long stranger_give = 0;
    long long millionaire_give = 0;
    long long money = 1;

    // 陌生人每天给 10 万元，30 天的总数
    stranger_give = 100000 * 30;

    // 百万富翁每天给的钱是前一天的两倍
    for (int i = 1; i <= 30; i++) {
        millionaire_give += money;
        money *= 2;
    }

    printf("这一个月中陌生人给了百万富翁 %lld 元。\n", stranger_give);
    printf("百万富翁给陌生人 %lld 分，即 %.2f 元。\n", millionaire_give, (double)millionaire_give / 100);

    return 0;
    }