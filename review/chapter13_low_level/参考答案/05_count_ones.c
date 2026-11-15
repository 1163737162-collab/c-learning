/* 统计二进制中 1 的个数：用 n &= n - 1 的方法统计无符号整数 n 中 1 的个数；分别试试 0、10 和 (unsigned int)-1。 */
#include <stdio.h>

int main(void)
{
    unsigned int n = 10, count = 0;

    while (n != 0) {
        n &= n - 1;
        count++;
    }
    printf("count=%u\n", count);
    return 0;
}
