
#include <stdio.h>
#include <string.h>

void reverseString(char a[]) {
    int len = strlen(a);
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int main() {
    char a[] = "apple";
    printf("原字符串: %s\n", a);
    reverseString(a);
    printf("逆转后的字符串: %s\n", a);
    return 0;
}
