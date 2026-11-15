/* 逐位检查：本例按这台 Mac 上 unsigned int 为 32 位来演示。 */
#include <stdio.h>

int main(void)
{
    unsigned int n = 10;
    unsigned int count = 0;

    for (int i = 0; i < 32; i++) {
        if (n & (1u << i)) {
            count++;
        }
    }
    printf("1 的个数 = %u\n", count);
    return 0;
}
