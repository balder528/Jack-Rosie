#include <stdio.h>

int main() {
    double score;
    printf("请输入学生的成绩(0 - 100):");
    scanf("%lf", &score);

    if (score < 0 || score > 100) {
        printf("输入的成绩不在 0 - 100 之间，出错！\n");
    } else {
        char grade;
        if (score >= 90) {
            grade = 'A';
        } else if (score >= 80) {
            grade = 'B';
        } else if (score >= 70) {
            grade = 'C';
        } else if (score >= 60) {
            grade = 'D';
        } else {
            grade = 'E';
        }
        printf("学生的等级是：%c\n", grade);
    }

    return 0;
}
