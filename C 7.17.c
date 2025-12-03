#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    char *start, *end;
    char temp;

    printf("请输入一行字符串: ");
    fgets(str, MAX_LEN, stdin);
    str[strcspn(str, "\n")] = 0;  // 去除换行符

    start = str;
    end = str + strlen(str) - 1;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("反向显示的字符串为: %s\n", str);
    return 0;
}