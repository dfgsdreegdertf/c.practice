#include <stdio.h>
int main(void)
{
    int a, b;
    int min;
    scanf("%d %d", &a, &b);

    // 找出a,b中较小的数
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    int ret = 0;
    int i;
    // 从1遍历到min，不断更新公约数，最后ret保存最大的
    for (i = 1; i <= min; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                ret = i;
            }
        }
    }
    printf("%d和%d的最大公约数是%d.\n", a, b, ret);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int a,b;
    int t;       // t用来存余数
    scanf("%d %d", &a, &b); // 输入两个数
    a=12;b=18;   // 这里是写死的测试值，会覆盖scanf输入的值，是这个代码的小问题

    while ( b!=0 ) {   // 只要余数b不等于0，继续算
        t = a%b;       // 算出a除以b的余数，存到t
        a = b;         // 把b放到a的位置
        b = t;         // 把余数t放到b的位置
    }
    // b变成0，停止循环，a就是最大公约数
   printf("a=%d,b=%d,t=%d\n",a, b,t);
}
*/