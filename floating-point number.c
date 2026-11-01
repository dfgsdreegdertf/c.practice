#include <stdio.h>

int main()

{
    printf ("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺7英寸:");
        int foot;
        int inch;
        scanf("%d %d",&foot,&inch);
        // printf("身高%f米\n",foot*0.3048+inch*0.0254);
        // printf("身高是%f米。\n",
        //       ((foot + inch / 12) * 0.3048) );
// 此处是浮点数，直接用整数计算了
        printf("身高是%f米。\n",
              ((foot + inch / 12.0) * 0.3048) );
        return 0;
}