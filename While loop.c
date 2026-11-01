#include <stdio.h>

int main(void)
{
    int i = 1;       // ①初始化
    while (i <= 10)  // ②循环条件
    {
        printf("%d ", i);
        i = i + 1;   // ③更新，很关键！不写就死循环
    }
    return 0;
}

#include <stdio.h>
/*
int main(void)
{
    // 预设答案
    int answer = 66;
    int guess;

    do
    {
        printf("请猜一个数字：");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("猜大了！\n");
        }
        else if (guess < answer)
        {
            printf("猜小了！\n");
        }
        else
        {
            printf("猜对啦！\n");
        }

    } while (guess != answer);  // 没猜对就继续循环，末尾分号不能忘

    return 0;
}
    */