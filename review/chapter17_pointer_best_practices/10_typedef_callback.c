/*
第 10 题　用 typedef 简化回调参数（讲义第 10 页，复习第 16 章）

题目
1. 用 typedef 定义 Transform，指向接受一个 int 并返回 int 的函数。
2. 实现 apply_all，把 src 的每个元素传给回调，并把结果写进 dest。
3. 测试两种回调：翻倍和取相反数。每次传入相同的源数组。
   如果指针或回调为空就返回 0，否则处理完返回 1。
   两组数组容量都至少是 count，且空间不重叠。自测数据不会溢出。

预期输出
翻倍：-4 0 6
相反数：2 0 -3
原数组：-2 0 3
*/

#include <stdio.h>

// TODO：定义 Transform，再声明 apply_all。
int twice(int value);
int negate(int value);

int main(void)
{
    int values[] = {-2, 0, 3};
    int results[3];

    // TODO：完成两个回调和 apply_all，再调用和打印。
    (void)values;
    (void)results;
    return 0;
}
