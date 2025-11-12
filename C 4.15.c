#include <stdio.h>

int main() {
    int chocolate = 1;
    for (int i = 9; i >= 1; i--) {
        chocolate = (chocolate + 1) * 2;
    }
    printf("小明妈妈总共给小明买了 %d 块巧克力。\n", chocolate);
    return 0;
}