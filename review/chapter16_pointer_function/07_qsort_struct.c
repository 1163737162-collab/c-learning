/*
第 7 题　用 qsort 排结构体（讲义第 14～15 页）

题目
1. 先按年龄从小到大排序，年龄相同时按名字字母顺序排。
2. 再单独按名字的字母顺序排序。
3. 给两种规则分别写比较函数。比较姓名可以用 strcmp。
   想想为什么 qsort 的第三个参数要传整个 Student 元素的大小。

预期输出
按年龄：Bo(18) Lin(18) An(21)
按名字：An(21) Bo(18) Lin(18)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[16];
    int age;
};

int compare_age(const void *left, const void *right);
int compare_name(const void *left, const void *right);

int main(void)
{
    struct Student students[] = {{"Lin", 18}, {"An", 21}, {"Bo", 18}};
    // TODO：写出两个比较函数，并排序打印两次。
    (void)students;
    return 0;
}
