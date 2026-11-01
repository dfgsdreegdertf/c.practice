#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    // n 是错的十进制（把0x12当成二进制算出来的18）
    // 取出高低4位：十六进制的十位、个位
    int high = n / 16;
    int low  = n % 16;
    int ans = high * 10 + low;
    printf("%d\n", ans);
    return 0;
}