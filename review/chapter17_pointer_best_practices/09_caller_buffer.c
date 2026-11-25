/*
第 9 题　把字符串写进调用者的数组（讲义第 9～10 页）

题目
1. 实现 write_name，把函数里的局部数组 name 复制到调用者传入的 out。
2. 复制前检查 out 是否为空，capacity 是否能装下全部字符和末尾的 '\0'。
3. 成功返回 1；失败返回 0，且不改动目标数组。
4. main 测试容量分别为 6 和 5 的数组，只在成功时把目标数组按字符串打印。

预期输出
容量 6：Alice
容量 5：空间不足
*/

#include <stdio.h>
#include <string.h>

int write_name(char *out, size_t capacity);

int main(void)
{
    char enough[6];
    char small[5];

    // TODO：分别调用 write_name，用 sizeof 传入容量。
    (void)enough;
    (void)small;
    return 0;
}

int write_name(char *out, size_t capacity)
{
    const char name[] = "Alice";

    // TODO：检查容量后复制整个 name，函数返回后由 main 使用自己的数组。
    (void)name;
    (void)out;
    (void)capacity;
    return 0;
}
