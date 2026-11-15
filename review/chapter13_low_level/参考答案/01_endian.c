/* 大小端判断：定义 unsigned int 值 1，用 unsigned char 指针读取其低地址的第一个字节；判断小端或大端并打印。 */
#include <stdio.h>

int main(void)
{
    unsigned int value = 1;
    unsigned char first = 0;

    first = *(const unsigned char *)&value;
    printf("first byte = %u; %s\n", (unsigned)first, first == 1 ? "little endian" : "big endian (or other layout)");
    return 0;
}
