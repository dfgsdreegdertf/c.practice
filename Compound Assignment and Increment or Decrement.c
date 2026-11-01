#include <stdio.h>

int main(void)
{
    int a = 10;

    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);

    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);

    return 0;
}
// a++ 是先使用当前值、再加 1；++a 是先加 1、再使用新值。