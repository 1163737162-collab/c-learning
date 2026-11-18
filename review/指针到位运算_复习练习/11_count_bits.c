/*
统计二进制中 1 的个数

题目：实现 count_ones，反复使用 n & (n - 1) 统计无符号整数中 1 的个数。分别测试 13、0 和 UINT_MAX。思考为什么每次能消去一个 1。

完成后的输出示例：
13：3
0：0
UINT_MAX：取决于 unsigned int 的位数

请在下方 TODO 处自己完成。
*/

#include <stdio.h>
#include <limits.h>

int count_ones(unsigned int n);

int main(void)
{
    unsigned int a = 13u;
    unsigned int b = 0u;
    unsigned int c = UINT_MAX;
    // TODO：调用 count_ones，打印三个结果。
    printf("13: %d\n",count_ones(a));
    printf ("0: %d\n",count_ones(b));
    printf("UTNT_MAX: %d\n",count_ones(c));
    return 0;
}

int count_ones(unsigned int n)
{
    // TODO：n 不为 0 时，利用 n & (n - 1) 消去一个 1 并计数。
    int count = 0;
    while(n)
    {
        n &=(n-1);
        count++;
    }
    return count; // 占位，完成后修改
}
