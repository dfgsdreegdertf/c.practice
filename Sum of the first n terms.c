#include <stdio.h>
int main(void)
{
    int n, i = 1;
    double sum = 0.0;
    printf("请输入n：");
    scanf("%d", &n);

    do
    {
        sum += 1.0 / i;
        i++;
    } while (i <= n);  // 不要忘了分号

    printf("1 + 1/2 + 1/3 + ... + 1/%d = %.4f\n", n, sum);
    return 0;
}
