#include <stdio.h>
int main(void)
{
    int n, i;
    int isPrime = 1;    // 标记变量，1=先假设它是素数
    scanf("%d", &n);    // 读入要判断的数字

    if (n <= 1)         // 小于等于1一定不是素数
        isPrime = 0;

    // i从2开始试除；i*i <= n：只需要试到根号n；isPrime为0就不用继续循环
    for (i = 2; i * i <= n && isPrime; i++)
    {
        if (n % i == 0) // n能被i整除，说明有别的因数
        {
            isPrime = 0;// 修改标记：不是素数
        }
    }

    if (isPrime)
        printf("%d 是素数\n", n);
    else
        printf("%d 不是素数\n", n);

    return 0;
}
