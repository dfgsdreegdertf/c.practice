#include <stdio.h>

int main(void)
{
    int hour1, minute1;
    int hour2, minute2;

    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int hours = hour2 - hour1;
    int minutes = minute2 - minute1;

    if (minutes < 0) {
        minutes += 60;
        hours--;
    }

    printf("时间差是%d小时%d分。\n", hours, minutes);

    return 0;
}