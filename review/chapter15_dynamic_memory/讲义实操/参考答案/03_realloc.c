/* 依据第15章讲义整理，安全参考实现。 */
/* 目标：把 int 数组从 3 个元素扩到 6 个，再缩到 2 个。
 * 预期输出：
 * 初始 3 个: 10 20 30
 * 扩容到 6 个: 10 20 30 40 50 60
 * 缩容到 2 个: 10 20
 */
#include <stdio.h>
#include <stdlib.h>

static void print_values(const char *label, const int *p, size_t count)
{
    printf("%s", label);
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }
}

int main(void)
{
    const size_t initial_count = 3;
    const size_t grown_count = 6;
    const size_t shrunk_count = 2;
    int *p = malloc(initial_count * sizeof *p);
    if (p == NULL) {
        fputs("malloc 分配失败。\n", stderr);
        return EXIT_FAILURE;
    }
    for (size_t i = 0; i < initial_count; ++i) {
        p[i] = (int)(i + 1) * 10;
    }
    print_values("初始 3 个: ", p, initial_count);

    /* 必须先用临时指针接收：失败时 p 仍指向原来的有效空间。 */
    int *temporary = realloc(p, grown_count * sizeof *p);
    if (temporary == NULL) {
        fputs("扩容失败，原数组仍有效，现在释放原数组。\n", stderr);
        free(p);
        return EXIT_FAILURE;
    }
    /* 成功后原指针值不可再使用，包括比较地址；直接改用返回值。 */
    p = temporary;
    /* 前 3 个元素自动保留；新增的 3 个元素必须先初始化。 */
    for (size_t i = initial_count; i < grown_count; ++i) {
        p[i] = (int)(i + 1) * 10;
    }
    print_values("扩容到 6 个: ", p, grown_count);

    temporary = realloc(p, shrunk_count * sizeof *p);
    if (temporary == NULL) {
        fputs("缩容失败，6 个元素的数组仍有效，现在释放它。\n", stderr);
        free(p);
        return EXIT_FAILURE;
    }
    p = temporary;
    /* 只保留前 2 个元素；不能再访问 p[2] 及之后的元素。 */
    print_values("缩容到 2 个: ", p, shrunk_count);

    free(p);
    p = NULL;
    return EXIT_SUCCESS;
}
