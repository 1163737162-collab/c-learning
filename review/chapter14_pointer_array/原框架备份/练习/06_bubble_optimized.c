/* 讲义 p12-13：一整趟没有交换，才可以提前结束。
 * TODO：从你写好的05题复制排序逻辑，再加交换标志和比较次数。
 * 先预测：有序10个数，基础版和优化版各要比较多少次？
 * 验收：结果正确；有序10个数只比较9次；空输入/单元素比较0次。
 */
#include <stdio.h>

static size_t bubble_sort_optimized(int arr[], size_t n)
{
    size_t comparisons = 0;
    /* TODO 1：移入05题的逻辑，保留 n<2 的处理。
     * TODO 2：每次比较一对相邻元素，comparisons 加1。
     * TODO 3：每一趟开始时重新设置“本趟未交换”的标志。
     *         发生交换时改变标志；一趟结束后再决定是否退出。
     * 不要在某一对元素无需交换时就提前结束整趟！
     */
    (void)arr;
    (void)n;
    return comparisons;
}

static int run_case(const char *name, int arr[], const int expected[],
                    size_t n, int check_count, size_t expected_count)
{
    size_t count = bubble_sort_optimized(arr, n);
    int ok = 1;
    for (size_t i = 0; i < n; ++i) {
        if (arr[i] != expected[i]) {
            ok = 0;
        }
    }
    if (check_count && count != expected_count) {
        ok = 0;
    }
    printf("%s：%s，比较 %zu 次\n", name, ok ? "通过" : "未通过", count);
    return ok;
}

int main(void)
{
    int completed = 0; /* TODO 4：完成函数后改成1。 */
    if (!completed) {
        puts("TODO：先完成优化版，再把 completed 改成1。当前尚未排序。");
        return 0;
    }
    const int expected[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nearly[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9};
    int reverse[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    /* 讲义p12写“第一趟后已经有序”的数据，实际上仍未升序。 */
    int lecture[] = {9, 8, 7, 6, 10, 5, 4, 3, 2, 1};
    int mixed[] = {2, -1, 2, 0};
    const int mixed_expected[] = {-1, 0, 2, 2};
    int single[] = {7};
    const int single_expected[] = {7};
    int ok = 1;
    ok &= run_case("已经有序", sorted, expected, 10, 1, 9);
    ok &= run_case("接近有序", nearly, expected, 10, 0, 0);
    ok &= run_case("完全逆序", reverse, expected, 10, 0, 0);
    ok &= run_case("讲义p12数据", lecture, expected, 10, 0, 0);
    ok &= run_case("重复值与负数", mixed, mixed_expected, 4, 0, 0);
    ok &= run_case("单元素", single, single_expected, 1, 1, 0);
    ok &= run_case("空输入", NULL, NULL, 0, 1, 0);
    return ok ? 0 : 1;
}
