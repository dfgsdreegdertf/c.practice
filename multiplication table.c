#include <stdio.h>
int main()
{
    int i, j;
    // i 代表行（乘数，1~9）
    for(i = 1; i <= 9; i++)
    {
        // j 代表列，j <= i ，保证每行不超过i个式子
        for(j = 1; j <= i; j++)
        {
            printf("%d*%d=%-2d ", j, i, i*j);
        }
        printf("\n"); // 一行结束，换行
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int i = 1;
    while(i <= 9)
    {
        int j = 1;
        while(j <= i)
        {
            printf("%d*%d=%-2d ", j, i, i*j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/