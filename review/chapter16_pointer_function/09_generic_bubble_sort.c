/*
第 9 题　用回调写通用冒泡排序（讲义第 15～17 页，加餐）

题目
1. 实现 generic_sort，参数形式和 qsort 一样，但内部使用冒泡排序。
2. 用字节指针和 width 找到相邻元素。由 compare 判断顺序，交换可用第 8 题的函数。
3. 元素个数小于 2 时直接结束。一整趟未交换时可以提前结束。
4. 先用整型数组验证。至少测试普通、有重复值、单元素和空范围。

预期输出
5 1 4 2 8 → 1 2 4 5 8
3 1 3 2 → 1 2 3 3
9 → 9
空范围 → 直接返回，不访问元素
*/

#include <stdio.h>

void generic_sort(void *base, size_t count, size_t width,
                  int (*compare)(const void *, const void *));

int main(void)
{
    // TODO：准备测试数组和整型比较函数，再调用 generic_sort。
    return 0;
}

void generic_sort(void *base, size_t count, size_t width,
                  int (*compare)(const void *, const void *))
{
    // TODO：遍历相邻元素，通过回调判断是否交换。
    (void)base;
    (void)count;
    (void)width;
    (void)compare;
}
