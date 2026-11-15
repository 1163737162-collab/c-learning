/* 按用户指定主题准备；尚未对照第15章PDF。
 * 目标：申请包含5个int的柔性数组，填写0..4，再扩容到8个，填写新增的5..7。
 * 未填的分配表达式为NULL；程序会提示并安全结束。
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
    if (count > (SIZE_MAX - sizeof(IntList)) / sizeof(int)) {
        return EXIT_FAILURE;
    }
    /* TODO 1：把NULL替换为malloc表达式，总字节数包含结构体和尾随元素。 */
    IntList *p = NULL;
    if (p == NULL) {
        puts("TODO 1尚未完成，或申请失败。");
        return EXIT_SUCCESS;
    }
    p->count = count;
    for (size_t i = 0; i < p->count; ++i) {
        p->a[i] = 0; /* TODO 2：将右侧改为下标i对应的int值。 */
        printf("%d%c", p->a[i], i + 1 == p->count ? '\n' : ' ');
    }
    if (larger > (SIZE_MAX - sizeof *p) / sizeof p->a[0]) {
        free(p);
        return EXIT_FAILURE;
    }
    const size_t old_count = p->count;
    /* TODO 3：用realloc调整整块内存。保留tmp和失败分支。 */
    IntList *tmp = NULL;
    if (tmp == NULL) {
        free(p);
        puts("TODO 3尚未完成，或扩容失败；原来的内存已释放。");
        return EXIT_SUCCESS;
    }
    p = tmp;
    for (size_t i = old_count; i < larger; ++i) {
        p->a[i] = 0; /* TODO 4：填写新增元素的值。 */
    }
    p->count = larger;
    for (size_t i = 0; i < p->count; ++i) {
        printf("%d%c", p->a[i], i + 1 == p->count ? '\n' : ' ');
    }
    free(p);
    p = NULL;
    /* TODO 5（文字回答）：为什么不能单独free(p->a)？为什么sizeof不等于总容量？ */
    return EXIT_SUCCESS;
}
