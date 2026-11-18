/* 依据第15章讲义整理，安全参考实现。
 * 标准柔性数组：int a[] 必须是结构体的最后一个成员。
 * 运行结果：0 1 2 3 4，然后扩容为 0 1 2 3 4 5 6 7。
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    size_t count;
    int a[];
} IntList;

int main(void)
{
    const size_t count = 5;
    const size_t larger = 8;

    /* 同时检查乘法、加法是否可能超出 size_t。 */
    if (count > (SIZE_MAX - sizeof(IntList)) / sizeof(int)) {
        return EXIT_FAILURE;
    }
    IntList *p = malloc(sizeof *p + count * sizeof p->a[0]);
    if (p == NULL) {
        fputs("申请内存失败\n", stderr);
        return EXIT_FAILURE;
    }
    p->count = count;
    for (size_t i = 0; i < p->count; ++i) {
        p->a[i] = (int)i;
        printf("%d%c", p->a[i], i + 1 == p->count ? '\n' : ' ');
    }
    printf("结构体本身：%zu 字节；本次申请：%zu 字节\n",
           sizeof *p, sizeof *p + count * sizeof p->a[0]);

    if (larger > (SIZE_MAX - sizeof *p) / sizeof p->a[0]) {
        free(p);
        return EXIT_FAILURE;
    }
    const size_t old_count = p->count;
    IntList *tmp = realloc(p, sizeof *p + larger * sizeof p->a[0]);
    if (tmp == NULL) {
        /* 本例请求非零大小；失败时 p 仍指向原来的有效内存。 */
        free(p);
        fputs("扩容失败\n", stderr);
        return EXIT_FAILURE;
    }
    p = tmp; /* 成功后只使用返回的新指针，不再使用旧的元素地址。 */
    for (size_t i = old_count; i < larger; ++i) {
        p->a[i] = (int)i;
    }
    p->count = larger;
    for (size_t i = 0; i < p->count; ++i) {
        printf("%d%c", p->a[i], i + 1 == p->count ? '\n' : ' ');
    }
    free(p); /* 结构体与尾随元素在一块内存里，只需要释放一次。 */
    p = NULL;
    return EXIT_SUCCESS;
}
