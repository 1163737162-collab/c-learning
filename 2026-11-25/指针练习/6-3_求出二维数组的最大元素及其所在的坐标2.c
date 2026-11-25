/*
6-3 求出二维数组的最大元素及其所在的坐标2


PTA 原题：https://pintia.cn/problem-sets/2125421768680599552/exam/problems/type/6?problemSetProblemId=2125422177496399872

编写一个函数 find，求出 N×M 整型数组的最大元素及其所在的行坐标、列坐标。如果最大元素不唯一，选择位置最前面的。

函数接口： int find(int array[N][M], int *Row, int *Col);

函数返回数组最大值，指针 Row、Col 分别用于带回最大值的行号、列号。题目给出的裁判样例中，N=5、M=6。

输入样例：

8 45 10 80 64 10
94 68 73 43 32 59
60 34 59 47 28 20
89 84 97 87 72 95
83 83 12 8 24 50

输出样例：

   8  45  10  80  64  10
  94  68  73  43  32  59
  60  34  59  47  28  20
  89  84  97  87  72  95
  83  83  12   8  24  50
max=97,row=3,col=2
*/

#include <stdio.h>

#define N 5
#define M 6

// 只需补写下面这个函数。当前函数体是占位框架，还没有实现题目要求。
// ===== 作答区开始：提交 PTA 时只复制此处的函数 =====
int find(int array[N][M], int *Row, int *Col)
{
    // TODO：在这里完成函数。
    return 0; // 占位返回值，请按题意修改。
}
// ===== 作答区结束 =====

// 以下是按已保存题面编写的本地测试框架，补完上面的函数后可直接运行。
int main(void)
{
    int array[N][M], row = 0, col = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (scanf("%d", &array[i][j]) != 1) return 0;
    int maximum = find(array, &row, &col);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) printf("%4d", array[i][j]);
        printf("\n");
    }
    printf("max=%d,row=%d,col=%d\n", maximum, row, col);
    return 0;
}
