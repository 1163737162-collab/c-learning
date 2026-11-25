/*
第 8 题　传入数组长度，检查访问范围（讲义第 9 页）

题目
1. 实现 try_sum_range，求下标 [begin, end) 的和，把结果写到 out。
2. 只有 values 和 out 都非空，且 begin <= end <= count 时才计算。
3. 合法时返回 1。空范围的和为 0。非法时返回 0，并保留 out 原来的值。
   调用者提供真实的元素个数，本题的测试数据之和都能用 int 表示。

自测（数组为 {10, 20, 30, 40, 50}）
[1, 4) → 成功，和为 90
[5, 5) → 成功，和为 0
[4, 6) → 失败，不访问数组之外
[4, 2) → 失败，开始位置超过结束位置
*/

#include <stdio.h>

int try_sum_range(const int *values, size_t count,
                  size_t begin, size_t end, int *out);

int main(void)
{
    int values[] = {10, 20, 30, 40, 50};
    size_t count = sizeof values / sizeof values[0];

    // TODO：用 count 传给函数，测试四个范围。
    (void)count;
    return 0;
}

int try_sum_range(const int *values, size_t count,
                  size_t begin, size_t end, int *out)
{
    // TODO：先检查边界，再计算区间和。不要访问下标 end。
    (void)values;
    (void)count;
    (void)begin;
    (void)end;
    (void)out;
    return 0;
}
