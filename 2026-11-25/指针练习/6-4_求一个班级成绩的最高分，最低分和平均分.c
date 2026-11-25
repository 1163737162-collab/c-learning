/*
6-4 求一个班级成绩的最高分，最低分和平均分


PTA 原题：https://pintia.cn/problem-sets/2125421768680599552/exam/problems/type/6?problemSetProblemId=2125422177496399873

输入一个班级的成绩，编写函数求出最高分、最低分和平均分。

函数接口： float fun(float score[], int n, float *max, float *min);

score 中保存班级成绩，n 表示班级人数，max、min 分别指向最高分和最低分，平均成绩通过函数返回值带回。

输入样例：

10
60 90 66 78 87 88 55 88 89 70

输出样例：

max=90.0, min=55.0, average=77.10
*/

#include <stdio.h>

// 只需补写下面这个函数。当前函数体是占位框架，还没有实现题目要求。
// ===== 作答区开始：提交 PTA 时只复制此处的函数 =====
float fun(float score[], int n, float *max, float *min)
{
    // TODO：在这里完成函数。
    return 0; // 占位返回值，请按题意修改。
}
// ===== 作答区结束 =====

// 以下是按已保存题面编写的本地测试框架，补完上面的函数后可直接运行。
int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    float score[n], max = 0, min = 0;
    for (int i = 0; i < n; i++)
        if (scanf("%f", &score[i]) != 1) return 0;
    float average = fun(score, n, &max, &min);
    printf("max=%.1f, min=%.1f, average=%.2f\n", max, min, average);
    return 0;
}
