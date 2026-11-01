#include <stdio.h>

int main(void)
{
    int time, minute;
    scanf("%d %d", &time, &minute);

    // 拆分出小时、分钟
    int h = time / 100;
    int m = time % 100;

    // 全部换算成总分钟，加上流逝的分钟
    int total = h * 60 + m + minute;

    // 算新的小时和分钟
    int newH = total / 60;
    int newM = total % 60;

    // 输出，自动不会带前导0
    printf("%d\n", newH * 100 + newM);

    return 0;
}