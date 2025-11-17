
#include <stdio.h>

int main() {
    double height = 100;
    double totalDistance = 100;
    for (int i = 1; i < 10; i++) {
        height /= 2;
        totalDistance += 2 * height;
    }
    height /= 2;
    printf("第 10 次落地时，共经过 %.2f 米\n", totalDistance);
    printf("第 10 次反弹 %.2f 米高\n", height);
    return 0;
}
