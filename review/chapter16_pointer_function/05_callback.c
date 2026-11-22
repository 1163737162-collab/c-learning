/*
第 5 题　把函数作为参数传进去（讲义第 10～12 页）

题目
1. 写两个函数，一个返回两个数中的较大值，另一个返回较小值。
2. 实现 calculate，让它通过接收到的函数指针完成计算。
3. 在 main 里对同一组数 (7, 3) 分别传入这两个函数。
   想一想：calculate 是从哪里知道该调用哪个函数的？

预期输出
较大值：7
较小值：3
*/

#include <stdio.h>

int bigger(int a, int b);
int smaller(int a, int b);
int calculate(int a, int b, int (*operation)(int, int));

int main(void)
{
    // TODO：写出 bigger、smaller 的定义，再把它们分别传给 calculate。
    printf("较大值: %d\n",calculate(7,3,bigger));
    printf("较小值: %d\n",calculate(7,3,smaller));
    return 0;
}
int bigger(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
int smaller(int a,int b)
{
    if(a<=b)
    return a;
    else 
    return b;
}

int calculate(int a, int b, int (*operation)(int, int))
{
    // TODO：调用 operation，并返回计算结果。
    return operation(a,b);
}
