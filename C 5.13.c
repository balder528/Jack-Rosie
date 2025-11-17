#include <stdio.h>
int main() {
    char ch;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    printf("请输入一行字符：\n");
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        } else if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            others++;
        }
    }

    printf("英文字母个数：%d\n", letters);
    printf("空格个数：%d\n", spaces);
    printf("数字个数：%d\n", digits);
    printf("其它字符个数：%d\n", others);

    return 0;
}