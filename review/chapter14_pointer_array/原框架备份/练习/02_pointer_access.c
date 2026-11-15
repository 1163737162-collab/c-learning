/*
 * PDF p4-5｜目标：把下标访问改写为指针访问，并通过指针修改原数组。
 * 手算预测：下标 2 的四种访问结果应相同；修改后哪一个元素变化？
 * TODO：替换值表达式的 0，填写写入语句与尾后指针。
 * 验收观察：四列相同；原数组只有下标 2 变成 99；尾后指针等于 p+n。
 * 尾后指针（one-past）可以形成、比较，不可以解引用。
 */
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int arr[] = {10, 20, 30, 40, 50};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int *p = arr;                     /* 完整示范：建立指向首元素的指针。 */
    size_t index = 2;
    int by_array = arr[index];
    int by_pointer_index = 0;         /* TODO 1：用 p 和下标读取。 */
    int by_array_offset = 0;          /* TODO 2：用 arr、加法和 * 读取。 */
    int by_pointer_offset = 0;        /* TODO 3：用 p、加法和 * 读取。 */

    puts("练习骨架：0 是占位；先预测再填写。");
    printf("四种访问：%d %d %d %d\n", by_array, by_pointer_index,
           by_array_offset, by_pointer_offset);
    for (size_t i = 0; i < n; ++i) {
        int value = 0;               /* TODO 4：用指针形式取第 i 个值。 */
        printf("i=%zu，下标读取=%d，指针读取=%d\n", i, arr[i], value);
    }

    /* TODO 5：只添加一条语句，通过 p 把下标 index 的元素改为 99。
       不修改 p 自身；修改的是它指向的数组元素。 */

    puts("修改后的原数组：");
    for (size_t i = 0; i < n; ++i) {
        printf("%d%c", arr[i], i + 1 == n ? '\n' : ' ');
    }

    int *end = NULL;                  /* TODO 6：指向最后元素之后的位置。 */
    if (end == NULL) {
        puts("尾后指针未填写，跳过比较。");
    } else {
        printf("end == p+n：%d\n", end == p + n);
        printf("end = %p\n", (void *)end);
        /* 不能求 *end，也不能读取 arr[n]；循环上界应为 i < n。 */
    }
    (void)p;                         /* 允许骨架在填写前严格编译。 */
    return 0;
}
