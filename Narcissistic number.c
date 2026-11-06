#include <stdio.h>
int main()
{
    int num = 100;   // 从最小三位数开始
    int a, b, c;     // a百位，b十位，c个位

    while(num <= 999)
    {
        a = num / 100;         // 取百位
        b = num / 10 % 10;     // 取十位
        c = num % 10;          // 取个位

        // 判断：百位立方 + 十位立方 + 个位立方 是否等于原数
        if(a*a*a + b*b*b + c*c*c == num)
        {
            printf("%d 是水仙花数\n", num);
        }
        num++;
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int i;
    int hundred, ten, one;
    // 枚举所有三位数
    for(i = 100; i <= 999; i++)
    {
        hundred = i / 100;
        ten = i / 10 % 10;
        one = i % 10;

        if( hundred*hundred*hundred + ten*ten*ten + one*one*one == i )
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
*/