/* 指定位置 1、清零：把 13 从右往左数第 5 位（下标 4）置 1 并打印，再清零并打印。 */
#include <stdio.h>

int main(void)
{
    unsigned int value = 13;

    // TODO: 把 13 从右往左数第 5 位（下标 4）置 1 并打印，再清零并打印。
    // 在这里亲手写代码。
    printf("原来的值: %d\n", value);
    value |= (1 << (5 - 1));
    printf("置1后值: %d\n", value);
    value &= ~(1 << (5 - 1));
    printf("清零后值: %d\n", value);
    return 0;
}
