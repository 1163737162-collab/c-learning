/*
第 1 题　先初始化，再使用指针（讲义第 1～2 页）

题目
1. 定义一个 int，初始值为 10。声明指针并初始化为空。
2. 先检查空指针，打印提示，再让它指向那个 int。
3. 通过指针把数值改成 20，打印原变量。

预期输出
指针暂未指向数据
value：20
*/

#include <stdio.h>

int main(void)
{
    int value = 10;
    // TODO：初始化指针、检查、让它指向 value，再通过指针改值。
    int *p = NULL;
    if(p==NULL)
    printf("p是空指针\n");
    p = &value;
    *p = 20;
    printf("%d",value);
    return 0;
}
