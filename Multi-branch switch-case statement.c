#include <stdio.h>

int main(void)
{
    int vip;
    printf("请输入会员等级（0普通 / 1银卡 / 2金卡）：");
    scanf("%d", &vip);

    switch (vip)
    {
        case 2:
            printf("金卡会员，8折\n");
            break;
        case 1:
            printf("银卡会员，9折\n");
            break;
        case 0:
            printf("普通用户，无折扣\n");
            break;
        default:
            printf("会员等级输入错误！\n");
            break;
    }

    return 0;
}
