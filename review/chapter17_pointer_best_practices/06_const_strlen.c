/*
第 6 题　给自写 strlen 加上只读约定（讲义第 8 页）

题目
1. 实现 my_strlen，参数约定为合法的 C 字符串。
2. 用指针走到第一个 '\0' 为止，返回它前面的字节数。
3. 按顺序测试字符串字面量 "hello"、空字符串、字符数组 "A\0B"。
   打印 size_t 可以用 %zu。不要调用库里的 strlen。

预期输出
5
0
1
*/

#include <stdio.h>

size_t my_strlen(const char *text);

int main(void)
{
    const char sample[] = "A\0B";

    // TODO：调用 my_strlen，打印三个测试结果。
    (void)sample;
    return 0;
}

size_t my_strlen(const char *text)
{
    // TODO：用指针遍历，遇到第一个 '\0' 停止计数。
    (void)text;
    return 0;
}
