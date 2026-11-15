/* 左右移：用无符号数 10，分别左移一位、右移一位；打印结果和原数，观察原数是否改变。 */
#include <stdio.h>

int main(void)
{
    unsigned int value = 10, left = 0, right = 0;

    left = value << 1;
    right = value >> 1;
    printf("left=%u right=%u original=%u\n", left, right, value);
    return 0;
}
