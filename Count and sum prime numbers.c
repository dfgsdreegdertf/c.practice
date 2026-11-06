#include <stdio.h>
int main(void)
{
    int m, n;
    int count = 0;   // 素数个数，计数器
    int sum = 0;     // 素数总和

    printf("请输入m和n：");
    scanf("%d %d", &m, &n);

    // 遍历 m ~ n 每一个数字
    for(int i = m; i <= n; i++)
    {
        if(i < 2)   // 小于2的一定不是素数
            continue;

        int isPrime = 1; // 标记：先假设它是素数
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0) // 能整除，说明不是素数
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) // 判定是素数
        {
            count++;
            sum += i;
        }
    }
    printf("素数个数=%d，素数总和=%d\n", count, sum);
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
    int m, n;
    int count = 0;
    int sum = 0;
    printf("请输入m n：");
    scanf("%d %d", &m, &n);

    int i = m;
    while(i <= n)
    {
        if(i >= 2)
        {
            int flag = 1;
            int j = 2;
            while(j < i)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
                j++;
            }
            if(flag == 1)
            {
                count++;
                sum = sum + i;
            }
        }
        i++;
    }
    printf("数量：%d，总和：%d\n", count, sum);
    return 0;
}

*/