/*
定义 int a = 100 和指向它的指针 pa。输出原值、a 的地址和 pa 保存的地址；通过 *pa 将 a 修改为 200，输出修改后的 a 和 *pa。输出并比较 sizeof(a) 和 sizeof(pa)。
提示：地址用 %p（参数转为 void *），sizeof 的结果用 %zu。
*/
#include <stdio.h>
int main(void)
{
    // TODO: 自己完成练习。
    int a = 100;
    int *pa = &a;
    printf("%d %p %p\n", a, &a, pa);
    *pa = 200;
    printf("%d %p\n", a, pa);
    size_t x = sizeof(a);
    size_t y = sizeof(pa);
    printf("%zu %zu\n", x, y);
    return 0;
}
