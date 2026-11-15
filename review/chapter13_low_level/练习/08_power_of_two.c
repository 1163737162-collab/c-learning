/* 判断是否为 2 的幂：完成讲义的思考题：判断无符号整数 n 是否为 2 的幂；试试 0、1、8、10。 */
#include <stdio.h>

int main(void)
{
    unsigned int n;
    scanf("%u",&n);
    if ((n&(n-1))==0&&n!=0)
    printf("yes");
    else
    printf("no");
    // TODO: 完成讲义的思考题：判断无符号整数 n 是否为 2 的幂；试试 0、1、8、10。
    // 在这里亲手写代码。
    return 0;
}
