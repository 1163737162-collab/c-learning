/* 依据第15章讲义整理，安全参考实现。
 * 两种结构都存放0..4：柔性数组一次分配，指针成员两次分配。
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
    Flexible *one = malloc(sizeof *one + count * sizeof one->a[0]);
    if (one == NULL) {
        return EXIT_FAILURE;
    }
    one->count = count;

    Separate *two = malloc(sizeof *two);
    if (two == NULL) {
        free(one);
        return EXIT_FAILURE;
    }
    two->count = count;
    two->a = malloc(count * sizeof two->a[0]);
    if (two->a == NULL) {
        free(two); /* 第二次分配失败，也要回收第一次分配的结构体。 */
        free(one);
        return EXIT_FAILURE;
    }

    for (size_t i = 0; i < count; ++i) {
        one->a[i] = (int)i;
        two->a[i] = (int)i;
        printf("下标%zu：柔性数组=%d，指针成员=%d\n", i, one->a[i], two->a[i]);
    }
    printf("结构体本身：柔性数组版%zu字节，指针成员版%zu字节\n",
           sizeof *one, sizeof *two);
    puts("柔性数组：1次分配，1次释放；指针成员：2次分配，2次释放。");

    free(two->a); /* 必须先释放成员，再释放结构体。 */
    two->a = NULL;
    free(two);
    two = NULL;
    free(one);
    one = NULL;
    return EXIT_SUCCESS;
}
