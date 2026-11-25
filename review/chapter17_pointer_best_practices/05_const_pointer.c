/*
第 5 题　const 放在星号的哪一边（讲义第 5～7 页）

题目
1. 下面给了四种指针声明。对每个指针分别判断：
   能不能用 *p = 30 改它指向的值？能不能用 p = &b 改它的指向？
2. 写下你的判断。合法的操作可以运行观察；编译器会拒绝的操作只写成注释。
3. 用 p2 改指向后打印它读到的值；用 p3 修改 a，再用 p4 读 a。

预期输出
p2 读取：20
p4 读取：30

思考：对象本身声明为 const 时，即使强转成普通指针，通过它写入仍是未定义行为。
*/

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    int *p1 = &a;
    const int *p2 = &a;
    int *const p3 = &a;
    const int *const p4 = &a;

    // TODO：写下四种类型的判断，再按题目做两项合法操作
    p2 = &b;
    printf("%d\n",*p2);
    *p3 = b;
    printf("%d",*p3);
    return 0;
}
