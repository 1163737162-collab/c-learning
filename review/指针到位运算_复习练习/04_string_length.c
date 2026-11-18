/*
指针遍历字符串

题目：实现 my_strlen，不调用 strlen，统计字符串中结尾字符 \0 前的字符个数。分别测试 hello 和空字符串。

完成后的输出示例：
hello 的长度：5
空字符串的长度：0

请在下方 TODO 处自己完成。
*/

#include <stdio.h>

size_t my_strlen(const char *s);

int main(void)
{
    char text[] = "hello";
    char empty[] = "";
    // TODO：调用 my_strlen；打印 size_t 时使用 %zu。
    (void)text; (void)empty;
    char *p1 = text;
    char *p2 = empty;
    printf("hello的长度: %zu\n",my_strlen(p1));
    printf("空字符串的长度: %zu\n",my_strlen(p2));
    return 0;
}

size_t my_strlen(const char *s)
{
    // TODO：使用指针遍历，遇到 \0 停止。
    (void)s;
    size_t count = 0;
    while (*(s+count))
    count++;
    return count; // 占位，完成后修改
}
