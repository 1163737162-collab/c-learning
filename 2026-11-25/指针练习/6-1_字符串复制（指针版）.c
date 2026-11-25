/*
6-1 字符串复制（指针版）


PTA 原题：https://pintia.cn/problem-sets/2125421768680599552/exam/problems/type/6?problemSetProblemId=2125471059735658496

编写函数，利用指针完成字符串复制，不允许调用 <string.h> 中的字符串库函数。函数将源字符串复制到目标字符空间中，自动带上字符串结束符 \0。

函数接口： void mystrcpy(char* s1, const char* s2);

将源字符串 s2 复制到目标字符串 s1。裁判程序读入两行字符串，调用函数后分别输出 s1 和 s2。

输入样例：

123123
456456

输出样例：

456456
456456
*/

#include <stdio.h>

// 只需补写下面这个函数。当前函数体是占位框架，还没有实现题目要求。
// ===== 作答区开始：提交 PTA 时只复制此处的函数 =====
void mystrcpy(char* s1, const char* s2)
{
    // TODO：在这里完成函数。
}
// ===== 作答区结束 =====

// 以下是按已保存题面编写的本地测试框架，补完上面的函数后可直接运行。
// 本地输入辅助：读取一行并去掉换行，不属于需要你完成的函数。
static int read_line(char s[], int capacity)
{
    if (fgets(s, capacity, stdin) == NULL) return 0;
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') i++;
    if (s[i] == '\n') s[i] = '\0';
    else {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}
    }
    return 1;
}

int main(void)
{
    char s1[1024] = {0}, s2[1024] = {0};
    if (!read_line(s1, sizeof s1) || !read_line(s2, sizeof s2)) return 0;
    mystrcpy(s1, s2);
    printf("%s\n%s\n", s1, s2);
    return 0;
}
