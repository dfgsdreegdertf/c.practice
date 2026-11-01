#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int a = n / 100;        // 百位
    int b = n / 10 % 10;    // 十位
    int c = n % 10;         // 个位
    int rev = c * 100 + b * 10 + a;
    printf("%d\n", rev);
    return 0;
}