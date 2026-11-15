/* 讲义 p11-12：冒泡排序（基础版）。
 * 先画出 {5, 1, 4, 2, 8} 第一趟的变化，再写代码。
 * TODO：完成 bubble_sort；在 main 中把 completed 改成 1 运行自测。
 * 验收：逆序、重复值、负数、单元素和 n=0 都正确，且不越界。
 */
#include <stdio.h>

static void bubble_sort(int arr[], size_t n)
{
    /* TODO 1：n < 2 时直接返回，避免 size_t 的 n-1 发生下溢。 */
    /* TODO 2：写两层循环。每趟结束后，未排序部分的最大值移到右边。
     * 内层访问 arr[j+1]，所以边界必须保证 j+1 仍在未排序范围内。
     * TODO 3：相邻元素逆序时，用临时变量交换。
     * 这一题先不要提前退出，优化放到第06题。
     */
    (void)arr;
    (void)n;
}

static int run_case(const char *name, int arr[], const int expected[], size_t n)
{
    bubble_sort(arr, n);
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] != expected[i]) {
            printf("%s：未通过，下标 %zu 的值不对。\n", name, i);
            return 0;
        }
    }
    printf("%s：通过\n", name);
    return 1;
}

int main(void)
{
    int completed = 0; /* TODO 4：完成函数后改成1；只改这一行不算完成。 */
    if (!completed) {
        puts("TODO：先完成 bubble_sort，再把 completed 改成1。当前尚未排序。");
        return 0;
    }

    int reverse[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    const int ascending[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int mixed[] = {3, -1, 3, 0, -1};
    const int mixed_expected[] = {-1, -1, 0, 3, 3};
    int sorted[] = {1, 2, 3};
    const int sorted_expected[] = {1, 2, 3};
    int single[] = {42};
    const int single_expected[] = {42};
    int ok = 1;
    ok &= run_case("逆序10个数", reverse, ascending, 10);
    ok &= run_case("重复值与负数", mixed, mixed_expected, 5);
    ok &= run_case("已经有序", sorted, sorted_expected, 3);
    ok &= run_case("单元素", single, single_expected, 1);
    /* NULL + n=0 是空输入约定，不是定义了一个零长度数组。 */
    ok &= run_case("空输入", NULL, NULL, 0);
    return ok ? 0 : 1;
}
