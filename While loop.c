#include <stdio.h>

int main(void)
{
    int i = 1;       // ①初始化
    while (i <= 10)  // ②循环条件
    {
        printf("%d ", i);
        i = i + 1;   // ③更新，很关键！不写就死循环
    }
    return 0;
}
