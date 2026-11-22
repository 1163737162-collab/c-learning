/*
第 2 题　用 typedef 给函数指针起名（讲义第 4～6 页）

题目
1. 用 typedef 定义 Handler，它指向参数为 int、返回 void 的函数。
2. 用 Handler 写 choose_handler。模式为 0 时返回 show_number，
   模式为 1 时返回 show_double，其他模式返回 NULL。
3. 在 main 中调用 choose_handler，先检查返回值，再把 6 传给选中的函数。
4. 在注释里尝试拆解讲义里的复杂表达式和 signal 声明。涉及空函数指针的例子只读不运行。

自测
模式 0，参数 6 → 数值：6
模式 1，参数 6 → 两倍：12
模式 2 → 无效模式
*/

#include <stdio.h>

void show_number(int value);
void show_double(int value);

// TODO：定义 Handler，再声明 choose_handler(int mode)。
typedef void (*Handler) (int);
Handler choose_handler (int mode);
int main(void)
{
    // TODO：测试 0、1、2 三种模式，调用前判空。
    // Handler p = choose_handler(0);
    // if(p!=NULL)
    // p(6);
    if (choose_handler(1)!=NULL)
    (choose_handler(1))(6);
    return 0;
}
Handler choose_handler (int mode)
{
    switch (mode)
    {
        case 0:
        return show_number;
        case 1:
        return show_double;
        default:
        return NULL;
    }
}

void show_number(int value)
{
    printf("数值：%d\n", value);
}

void show_double(int value)
{
    printf("两倍：%d\n", value * 2);
}
