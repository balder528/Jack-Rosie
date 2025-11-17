
#include <stdio.h>

#define N 5

int main() {
    int matrix[N][N];
    int i, j, sum = 0;

    // 输入矩阵元素
    printf("请输入 5x5 矩阵的元素：\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 计算两条对角线上元素的和
    for (i = 0; i < N; i++) {
        sum += matrix[i][i];  
        sum += matrix[i][N - 1 - i];  
    }
    if (N % 2 == 1) {
        sum -= matrix[N / 2][N / 2];
    }

    printf("两条对角线上元素的和为：%d\n", sum);

    return 0;
}