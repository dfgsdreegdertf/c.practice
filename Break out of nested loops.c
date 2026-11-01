#include <stdio.h>
int main()
{
    int x;
    int one, two, five;
    printf("请输入多少元：");
    scanf("%d", &x);   // 自己输入金额

    // one：1角数量，two：2角，five：5角，都至少1个
    for ( one = 1; one < x*10; one++ )
    {
        for ( two = 1; two < x*10/2; two++ )
        {
            for ( five = 1; five < x*10/5; five++ )
            {
                // 换算成角：x元 = x*10 角
                if ( one + two*2 + five*5 == x*10 )
                {
                    printf("可以用%d个1角 + %d个2角 + %d个5角 凑成%d元\n",
                           one, two, five, x);
                }
            }
        }
    }
    return 0;
}
