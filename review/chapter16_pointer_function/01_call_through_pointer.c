/*
第 1 题　通过函数指针调用函数（讲义第 1～3 页）

题目
1. 写出 add(int, int)，返回两个数的和。
2. 声明一个函数指针 pf，让它指向 add。
3. 对同一对参数 (3, 5)，用 pf(...) 和 (*pf)(...) 各调用一次。
4. 试着用 &add 再赋值一次，观察结果。想一想：声明里的括号为什么不能省？

预期输出
8
8
*/

#include <stdio.h>

int add(int a, int b);

int main(void)
{
    // TODO：定义并初始化 pf，再用两种形式调用。
    // int (*pf)(int ,int ) = add;
    // printf("%d\n",pf(3,5));
    // printf("%d\n",(*pf)(3,5));
    // printf("%p\n",add);
    // printf("%p",&add);
    typedef int (*pf)(int ,int);
    pf p = add;
    printf("%d\n",p(3,5));
    return 0;
}

int add(int a, int b)
{
    // TODO：实现加法。
    return a+b;
}
