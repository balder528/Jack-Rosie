#include <stdio.h>
#include <stdbool.h>

// 判断一个数是否为素数
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// 验证哥德巴赫猜想
void goldbach_conjecture(int n) {
    if (n <= 2 || n % 2 != 0) {
        printf("%d 不是大于 2 的偶数，无法验证哥德巴赫猜想。\n", n);
        return;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            return;
        }
    }
    // 如果程序执行到这里，说明没有找到符合条件的素数对
    printf("未找到符合哥德巴赫猜想的素数对，可能哥德巴赫猜想不成立（但这是不可能的）。\n");
}

int main() {
    int start, end;
    printf("请输入验证范围的起始偶数和结束偶数（用空格分隔）：");
    scanf("%d %d", &start, &end);

    // 确保输入的起始和结束数是偶数且大于 2
    if (start <= 2 || start % 2 != 0) {
        start = (start <= 2) ? 4 : start + 1;
    }
    if (end % 2 != 0) {
        end--;
    }

    for (int i = start; i <= end; i += 2) {
        goldbach_conjecture(i);
    }

    return 0;
}
