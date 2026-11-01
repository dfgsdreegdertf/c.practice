#include <stdio.h>

int main(void)
{
    int cm;
    scanf("%d", &cm);
    // 厘米转米：cm / 100.0
    double meter = cm / 100.0;
    // 反推总英寸：(foot + inch/12) = meter / 0.3048
    double totalInch = meter / 0.3048 * 12;

    int foot = totalInch / 12;
    int inch = totalInch - foot * 12;

    printf("%d %d\n", foot, inch);
    return 0;
}