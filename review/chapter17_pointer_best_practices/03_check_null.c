/*
第 3 题　使用前检查非空（讲义第 2～3 页）

题目
1. 实现 try_read，把 src 指向的 int 写到 out 指向的位置。
2. 两个指针都有效时返回 1。任意一个为 NULL 时返回 0，此时不访问任一指针。
3. main 测试成功、src 为 NULL、out 为 NULL 三种情况。失败后确认原结果没被改掉。

预期输出
正常读取：42
空来源：失败，结果仍为 42
空目标：失败
*/

#include <stdio.h>

int try_read(const int *src, int *out);

int main(void)
{
    int value = 42;
    int result = -1;

    // TODO：分别传有效地址和 NULL，根据返回值判断结果。
    printf("%d\n",try_read(&value,&result));
    printf("%d\n",result);
    return 0;
}

int try_read(const int *src, int *out)
{
    // TODO：先判空，再做读写
    if(src&&out)
    {
        *out = *src;
        return 1;
    }
    else
    return 0;
}
