/* 统计二进制中 1 的个数：用 n &= n - 1 的方法统计无符号整数 n 中 1 的个数；分别试试 0、10 和 (unsigned int)-1。 */
#include <stdio.h>

int main(void)
{
    unsigned int n , count = 0;
    scanf("%u",&n);

    // TODO: 用 n &= n - 1 的方法统计无符号整数 n 中 1 的个数；分别试试 0、10 和 (unsigned int)-1。
    // 在这里亲手写代码。
    // while (n)
    // {
    //     count++;
    //     n &= n -1;
    // }
    for(int i = 0;i<32;i++)
    {
        if(n&(1<<i))
        count++;
    }
    printf("%d\n",count);
    return 0;
}
