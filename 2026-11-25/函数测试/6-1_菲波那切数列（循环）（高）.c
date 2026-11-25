/*
6-1 菲波那切数列（循环）（高）


PTA 原题：https://pintia.cn/problem-sets/2125456557698838528/exam/problems/type/6?problemSetProblemId=2125456557749170176

请编写函数，求菲波那切（Fibonacci）数列某一项的值。

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

函数原型： double Fib(int index);

参数 index 为数列项的索引号，从 0 开始计数。函数值为 Fibonacci 数列第 index 项的值。

要求： 用循环方法完成函数设计。

裁判程序读入一个整数 n，调用 Fib(n)，按 %g 格式输出结果并换行。

输入样例：

8

输出样例：

21
*/

#include <stdio.h>

// 只需补写下面这个函数。当前函数体是占位框架，还没有实现题目要求。
// ===== 作答区开始：提交 PTA 时只复制此处的函数 =====
double Fib(int index)
{
    // TODO：在这里完成函数。
    return 0; // 占位返回值，请按题意修改。
}
// ===== 作答区结束 =====

// 以下是按已保存题面编写的本地测试框架，补完上面的函数后可直接运行。
int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;
    printf("%g\n", Fib(n));
    return 0;
}
