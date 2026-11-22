/*
第 10 题　通用排序换一种数据测试（讲义第 15～17 页，加餐）

题目
1. 把第 9 题的 generic_sort 和它依赖的辅助函数复制进本文件。
2. 用同一个排序函数先排 int，再按分数从高到低排 Student。
   分数相同时按名字的字母顺序排。分别传入对应的比较函数。
3. 用相同数据调用标准库 qsort 核对结果。两次排序最好从相同的原数组开始。

预期输出
整数：1 2 3
学生：An(95) Bo(95) Lin(80)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[16];
    int score;
};

void generic_sort(void *base, size_t count, size_t width,
                  int (*compare)(const void *, const void *));

int main(void)
{
    int numbers[] = {3, 1, 2};
    struct Student students[] = {{"Lin", 80}, {"Bo", 95}, {"An", 95}};
    // TODO：引入第 9 题的实现和对应的比较函数，分别排序并核对。
    (void)numbers;
    (void)students;
    return 0;
}
