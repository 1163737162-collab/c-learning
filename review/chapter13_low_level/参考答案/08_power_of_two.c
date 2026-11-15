/* 判断是否为 2 的幂：完成讲义的思考题：判断无符号整数 n 是否为 2 的幂；试试 0、1、8、10。 */
#include <stdio.h>

int main(void)
{
    unsigned int n = 8;

    if (n != 0 && (n & (n - 1)) == 0)
        printf("%u is a power of two\n", n);
    else
        printf("%u is not a power of two\n", n);
    return 0;
}
