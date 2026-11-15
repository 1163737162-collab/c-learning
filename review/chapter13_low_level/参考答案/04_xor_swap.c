/* 异或交换：不使用第三个变量，用三次异或交换 a 和 b，然后打印。 */
#include <stdio.h>

int main(void)
{
    unsigned int a = 10, b = 20;

    a ^= b;
    b ^= a;
    a ^= b;
    printf("a=%u b=%u\n", a, b);
    return 0;
}
