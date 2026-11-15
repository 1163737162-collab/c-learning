/* 按用户指定主题准备；尚未对照第15章PDF。
 * 目标：两种结构各存放0..4，比较分配与释放的次数。
 * 默认NULL占位会安全退出。按顺序完成TODO，保留每次失败时的清理。
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    size_t count;
    int a[];
} Flexible;

typedef struct {
    size_t count;
    int *a;
} Separate;

int main(void)
{
    const size_t count = 5;
    if (count > (SIZE_MAX - sizeof(Flexible)) / sizeof(int)) {
        return EXIT_FAILURE;
    }
    Flexible *one = NULL; /* TODO 1：一次malloc分配结构体及尾随的5个int。 */
    if (one == NULL) {
        puts("TODO 1尚未完成，或申请失败。");
        return EXIT_SUCCESS;
    }
    one->count = count;
    Separate *two = NULL; /* TODO 2：malloc分配Separate结构体本身。 */
    if (two == NULL) {
        free(one);
        puts("TODO 2尚未完成，或申请失败。");
        return EXIT_SUCCESS;
    }
    two->count = count;
    two->a = NULL; /* TODO 3：再malloc分配5个int，并把地址存进成员。 */
    if (two->a == NULL) {
        free(two);
        free(one);
        puts("TODO 3尚未完成，或申请失败。");
        return EXIT_SUCCESS;
    }
    for (size_t i = 0; i < count; ++i) {
        one->a[i] = 0; /* TODO 4：填写下标i对应的int值。 */
        two->a[i] = 0; /* TODO 5：同上。 */
        printf("下标%zu：柔性数组=%d，指针成员=%d\n", i, one->a[i], two->a[i]);
    }
    /* TODO 6（文字回答）：为什么free(two)不会自动释放two->a？ */
    free(two->a);
    two->a = NULL;
    free(two);
    two = NULL;
    free(one);
    one = NULL;
    return EXIT_SUCCESS;
}
