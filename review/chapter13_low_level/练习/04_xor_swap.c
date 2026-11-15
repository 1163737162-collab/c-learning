/* 异或交换：不使用第三个变量，用三次异或交换 a 和 b，然后打印。 */
#include <stdio.h>

int main(void)
{
    int a ,b ;
    scanf("%d %d",&a,&b);

    // TODO: 不使用第三个变量，用三次异或交换 a 和 b，然后打印。
    // 在这里亲手写代码。
    printf("原来的: a = %d b = %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("交换后: a = %d b = %d\n",a,b);
    return 0;
}
