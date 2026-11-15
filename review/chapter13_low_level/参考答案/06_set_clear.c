/* 指定位置 1、清零：把 13 从右往左数第 5 位（下标 4）置 1 并打印，再清零并打印。 */
#include <stdio.h>

int main(void)
{
    unsigned int value = 13;

    value |= 1u << 4;
    printf("set=%u\n", value);
    value &= ~(1u << 4);
    printf("clear=%u\n", value);
    return 0;
}
