/* 除二取余法：统计非负整数的二进制中有几个 1。
   思路：每次对 2 取余得到最低位，再除以 2 去掉最低位。
   自测：10 -> 2；0 -> 0；13 -> 3。
   思考：为什么直接用有符号负数，不适合统计它补码中的 1？ */
#include <stdio.h>

int main(void)
{
    unsigned int n = 10;
    unsigned int count = 0;

    // TODO: 循环取余、计数、除以 2，直到 n 为 0。
    // TODO: 输出 count，换不同数值测试。

    return 0;
}
