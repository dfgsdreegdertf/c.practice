#include <stdio.h>
int main(void)
{
    int x;
    printf("请输入整数：");
    scanf("%d", &x);

    int base = 1;
    // 找到最高位对应的基数，700的base就是100
    while (base <= x / 10)
    {
        base = base * 10;
    }

    // 从高位到低位依次取出每一位，末尾0也一起打印
    while (base > 0)
    {
        int d = x / base;  // 取出当前最高位
        printf("%d ", d);
        x = x % base;      // 去掉最高位
        base = base / 10;  // 基数缩小十倍
    }
    return 0;
}
