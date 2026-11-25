/*
6-2 使用函数统计指定数字的个数


PTA 原题：https://pintia.cn/problem-sets/2125456557698838528/exam/problems/type/6?problemSetProblemId=2125456557749170177

本题要求实现一个统计整数中指定数字的个数的简单函数。

函数接口： int CountDigit(int number, int digit);

number 为整数，digit 为 [0,9] 区间内的整数。函数返回 number 中数字 digit 出现的次数。题面文字称 number“不超过长整型”，但接口及裁判输入均使用 int。

裁判程序输入 number、digit，输出格式见样例。

输入样例：

-21252 2

输出样例：

Number of digit 2 in -21252: 3
*/

#include <stdio.h>

// 只需补写下面这个函数。当前函数体是占位框架，还没有实现题目要求。
// ===== 作答区开始：提交 PTA 时只复制此处的函数 =====
int CountDigit(int number, int digit)
{
    // TODO：在这里完成函数。
    return 0; // 占位返回值，请按题意修改。
}
// ===== 作答区结束 =====

// 以下是按已保存题面编写的本地测试框架，补完上面的函数后可直接运行。
int main(void)
{
    int number, digit;
    if (scanf("%d%d", &number, &digit) != 2) return 0;
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    return 0;
}
