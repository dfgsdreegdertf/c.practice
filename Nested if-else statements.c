#include <stdio.h>

int main(void)
{
    // 商品价格、付款金额、会员等级
    int price = 0;
    int pay = 0;
    int vip = 0;

    printf("输入商品价格：");
    scanf("%d", &price);
    printf("输入实付金额：");
    scanf("%d", &pay);
    printf("输入会员等级（0普通/1银卡/2金卡）：");
    scanf("%d", &vip);

    if (vip == 2)
    {
        printf("金卡会员，享受8折优惠\n");
        price = price * 8 / 10;
    }
    else if (vip == 1)
    {
        printf("银卡会员，享受9折优惠\n");
        price = price * 9 / 10;
    }
    else if (vip == 0)
    {
        printf("普通用户，无折扣\n");
    }
    else
    {
        printf("会员等级输入错误！\n");
        return 0;
    }

    if (pay >= price)
    {
        printf("应付：%d 元，找零：%d 元\n", price, pay - price);
    }
    else
    {
        printf("金额不足，还差：%d 元\n", price - pay);
    }

    return 0;
}
