/*
编写函数接收两个整数的地址并交换原变量的值。在 main 中输出交换前后的两个数。
*/
#include <stdio.h>
void swap (int*a,int*b);
int main(void)
{
    // TODO: 自己完成练习。
    int a = 10;
    int b = 20;
    int*pa = &a;
    int*pb = &b;
    printf("原来的 a = %d\n",a);
    printf("原来的 b = %d\n",b);
    swap(&a,&b);
    printf("现在的 a = %d\n",a);
    printf("现在的 b = %d\n",b);
    return 0;
}
void swap (int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
