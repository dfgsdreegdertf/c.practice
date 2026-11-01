#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i > 80)
        {
            break;      // 大于80：直接跳出整个循环
        }
        if (i % 7 == 0)
        {
            continue;   // 是7的倍数：跳过本次后面的printf，进入下一轮
        }
        printf("%d ", i);
    }
    return 0;
}
