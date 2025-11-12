#include <stdio.h>
#include <string.h>

int main() {
    char gender[10];
    double weight;
    int bloodVolume;

    printf("请输入性别（男/女）：");
    scanf("%s", gender);
    printf("请输入体重（公斤）：");
    scanf("%lf", &weight);

    if (strcmp(gender, "男") == 0) {
        if (weight > 120) {
            bloodVolume = 200;
        } else {
            bloodVolume = 180;
        }
    } else if (strcmp(gender, "女") == 0) {
        if (weight > 100) {
            bloodVolume = 150;
        } else {
            bloodVolume = 120;
        }
    } else {
        printf("输入的性别信息有误。\n");
        return 1;
    }
     printf("输血量为：%d 毫升\n", bloodVolume);
     return 0;
}