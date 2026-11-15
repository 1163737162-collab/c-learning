/* 按位与、或、异或、取反：用 5 和 3 计算 &、|、^；用 ~ 对 5 取反，以十六进制打印。先手算结果再运行。 */
#include <stdio.h>

int main(void)
{
    unsigned int a = 5, b = 3;

    printf("AND=%u OR=%u XOR=%u NOT=0x%X\n", a & b, a | b, a ^ b, ~a);
    return 0;
}
