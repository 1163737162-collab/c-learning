/*
6-3 字符串连接


PTA 原题：https://pintia.cn/problem-sets/2125456557698838528/exam/problems/type/6?problemSetProblemId=2125460056808288256

将两个字符串连接起来，构成新的字符串。不许使用字符串处理函数。

函数接口： void fun(char s1[80], char s2[40]);

s1、s2 都是用户传入的参数。函数将字符串 s2 连接到字符串 s1 的后面。裁判程序读取两行字符串，调用函数后输出 s1。

输入样例：

asd
eret

输出样例：

asderet
*/

#include <stdio.h>

// 只需补写下面这个函数。当前函数体是占位框架，还没有实现题目要求。
// ===== 作答区开始：提交 PTA 时只复制此处的函数 =====
void fun(char s1[80], char s2[40])
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
    char s1[80] = {0}, s2[40] = {0};
    // 两行各读入至多 39 个字符，保证连接后的内容能放入 s1。
    if (!read_line(s1, 40) || !read_line(s2, 40)) return 0;
    fun(s1, s2);
    printf("%s\n", s1);
    return 0;
}
