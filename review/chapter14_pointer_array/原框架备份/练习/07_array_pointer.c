/* 讲义 p13-14：数组指针 int (*p)[10]。
 * TODO：初始化p、经p读写元素。先写出p、*p、(*p)[2]的类型。
 * 验收：能解释sizeof(p)与sizeof(*p)；修改后arr[2]为99。
 */
#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int (*p)[10] = NULL; /* TODO 1：用整个arr的地址替换NULL，不要强制转换。 */
    printf("arr[2] 修改前：%d\n", arr[2]);
    if (p == NULL) {
        puts("TODO：先给数组指针p正确赋值。");
        return 0;
    }
    printf("p=%p，p+1=%p\n", (void *)p, (void *)(p + 1));
    printf("sizeof(p)=%zu，sizeof(*p)=%zu\n", sizeof p, sizeof *p);
    /* p+1 是整个arr之后的位置，只打印/比较，不解引用。 */

    int third = 0; /* TODO 2：通过p读取第3个元素，不直接使用arr。 */
    printf("通过p读出的第3个元素：%d（未填写时为占位0）\n", third);
    /* TODO 3：通过p把第3个元素改成99。 */
    printf("arr[2] 修改后：%d\n", arr[2]);

    /* TODO 4（写在这里）：
     * int (*p)[10] 是什么？________
     * int *q[10] 是什么？________
     * 去掉p两边的括号，声明的含义为什么变了？________
     */
    return 0;
}
