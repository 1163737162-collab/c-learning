/*
第 3 题　函数指针数组（讲义第 6～7 页）

题目
1. 写三个签名相同的函数，分别计算加、减、乘。
2. 把三个函数放进函数指针数组，依次通过数组里的指针调用。
3. 每次都传入 7 和 3。想一想：数组元素的类型是什么？

预期输出
10
4
21
*/

#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main(void)
{
    // TODO：补好三个函数，在这里声明函数指针数组并遍历调用。
    int (*parr[4])(int ,int ) = {0,add,sub,mul};
    printf("%d\n",parr[1](7,3));
    printf("%d\n",parr[2](7,3));
    printf("%d\n",parr[3](7,3));
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
