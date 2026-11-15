/* 大小端判断：定义 unsigned int 值 1，用 unsigned char 指针读取其低地址的第一个字节；判断小端或大端并打印。 */
#include <stdio.h>

int main(void)
{
    unsigned int value = 1;
    unsigned char first = 0;
    unsigned char* sp = (unsigned char*)&value;
    first = *sp;
    if(first)
    printf("小端 %d",*sp);
    else
    printf("大端 %d",*sp);
    

    // TODO: 定义 unsigned int 值 1，用 unsigned char 指针读取其低地址的第一个字节；判断小端或大端并打印。
    // 在这里亲手写代码。
    return 0;
}
