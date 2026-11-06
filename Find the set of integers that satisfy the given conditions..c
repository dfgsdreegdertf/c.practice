#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    a = 4;   // 固定a=2，所以可用数字：2、3、4、5

    int i, j, k;
    int cnt = 0;  // cnt用来计数：每打印6个就换行

    i = a;
    while (i <= a + 3)   // i 遍历：2,3,4,5（百位）
    {
        j = a;
        while (j <= a + 3)   // j 遍历：2,3,4,5（十位）
        {
            k = a;
            while (k <= a + 3)   // k 遍历：2,3,4,5（个位）
            {
                // 判断：i、j、k三个数字全部不相等
                if (i != j)
                {
                    if (i != k)
                    {
                        if (j != k)
                        {
                            cnt++;  // 找到一个合法排列，计数+1
                            printf("%d%d%d", i, j, k); // 打印这个三位数

                            if (cnt == 6)
                            {
                                // 已经打印6个了，换行，计数器清零
                                printf("\n");
                                cnt = 0;
                            }
                            else
                            {
                                // 不够6个，后面打空格隔开
                                printf(" ");
                            }
                        }
                    }
                }
                k++;  // 个位+1，最内层循环自增
            }
            j++;  // 十位+1，中层循环自增
        }
        i++;  // 百位+1，外层循环自增
    }
    return 0;
}
