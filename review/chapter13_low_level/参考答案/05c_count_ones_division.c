/* 除二取余法：统计无符号整数的二进制中 1 的个数。 */
#include <stdio.h>

int main(void)
{
    unsigned int n = 10;
    unsigned int count = 0;
    while (n != 0) {
        if (n % 2u == 1u) {
            count++;
        }
        n /= 2u;
    }
    printf("1 的个数 = %u\n", count);
    return 0;
}
