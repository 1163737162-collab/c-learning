/*
 * PDF p1-5、p8｜目标：区分数组、首元素指针与整个数组的指针。
 * 手算预测：写出 arr、&arr、arr+1、&arr+1 的类型和步长；
 *           按本机 sizeof(int)、sizeof(int *) 推算下面每个字节数。
 * TODO：替换 NULL、0 占位；不要直接把手算出的常数填进 sizeof 题。
 * 验收观察：起点地址看起来相同，+1 的步长不同；sizeof 的结果与类型有关。
 * 地址每次运行可能变化，不要求某个固定地址或固定的指针字节数。
 */
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *first = arr;                 /* 完整示范：数组转为首元素指针。 */
    int (*whole)[10] = NULL;          /* TODO 1：整个 arr 的地址。 */
    int *next_element = NULL;         /* TODO 2：arr 前进一个元素。 */
    int (*next_array)[10] = NULL;     /* TODO 3：&arr 前进一个数组。 */

    puts("练习骨架：NULL 与 0 是占位，不能当作答案。");
    printf("arr       = %p\n", (void *)first);
    printf("&arr[0]   = %p\n", (void *)&arr[0]);
    printf("&arr      = %p\n", (void *)whole);
    printf("arr+1     = %p\n", (void *)next_element);
    printf("&arr+1    = %p\n", (void *)next_array);
    if (whole == NULL || next_element == NULL || next_array == NULL) {
        puts("地址任务尚未填写；只打印占位，不解引用。");
    }
    /* next_array 是越过整个数组的位置，只观察，不能解引用。
       不要用不同类型指针相减来计算字节数；由 sizeof 推导步长。 */

    size_t s_array = sizeof(arr);     /* 完整示范。 */
    size_t s_pointer = 0;             /* TODO 4：sizeof(arr+0)。 */
    size_t s_element = 0;             /* TODO 5：sizeof(*arr)。 */
    printf("sizeof(arr)   = %zu\n", s_array);
    printf("sizeof(arr+0) = %zu\n", s_pointer);
    printf("sizeof(*arr)  = %zu\n", s_element);

    /* p8 原题：先在纸上写类型，再将六个 0 改为对应 sizeof 表达式。 */
    int a[] = {1, 2, 3, 4};
    size_t q1 = 0;                    /* TODO 6：sizeof(a)。 */
    size_t q2 = 0;                    /* TODO 7：sizeof(a+0)。 */
    size_t q3 = 0;                    /* TODO 8：sizeof(*a)。 */
    size_t q4 = 0;                    /* TODO 9：sizeof(&a)。 */
    size_t q5 = 0;                    /* TODO 10：sizeof(*&a)。 */
    size_t q6 = 0;                    /* TODO 11：sizeof(&a[0]+1)。 */
    (void)a;                         /* 填完后可删除此行。 */
    printf("p8-1 sizeof(a)       = %zu\n", q1);
    printf("p8-2 sizeof(a+0)     = %zu\n", q2);
    printf("p8-3 sizeof(*a)      = %zu\n", q3);
    printf("p8-4 sizeof(&a)      = %zu\n", q4);
    printf("p8-5 sizeof(*&a)     = %zu\n", q5);
    printf("p8-6 sizeof(&a[0]+1) = %zu\n", q6);
    return 0;
}
