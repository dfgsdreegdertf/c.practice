#include <stdio.h>

int main(void)
{
    int i, j;
    // i 代表行，一共9行
    for (i = 1; i <= 9; i++)
    {
        // j 代表列，第i行就有i列，所以j从1到i
        for (j = 1; j <= i; j++)
        {
            // %d*%d= 原样输出乘式；%-2d 乘积左对齐，占2个字符宽度，用来对齐排版
            printf("%d*%d=%-2d  ", j, i, i * j);
        }
        printf("\n"); // 一行全部打印完，换行，准备下一行
    }
    return 0;
}
