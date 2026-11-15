/*
定义整数、指向该整数的指针及指向该指针的二级指针。输出各层地址和值，通过二级指针修改整数并验证。
*/
#include <stdio.h>
int main(void)
{
    // TODO: 自己完成练习。
    int a = 10;
    int* pa = &a;
    int** ppa = &pa;
    **ppa = 20;
    printf("%d",a);
    return 0;
}
