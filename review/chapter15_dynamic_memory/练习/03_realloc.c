/* 按用户指定主题准备；尚未对照第15章PDF。 */
/* 目标：先申请 3 个 int，扩容到 6 个，再缩容到 2 个。
 * 完成后的预期输出：
 * 初始 3 个: 10 20 30
 * 扩容到 6 个: 10 20 30 40 50 60
 * 缩容到 2 个: 10 20
 * 未填写的分配表达式是 NULL；对应检查会安全结束并清理已有空间。
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
    /* TODO 1：用 malloc 申请 initial_count 个 int，使用 sizeof *p。 */
    int *p = NULL;
    if (p == NULL) {
        puts("TODO：尚未申请初始空间，或 malloc 分配失败。");
        return EXIT_SUCCESS;
    }
    for (size_t i = 0; i < initial_count; ++i) {
        /* TODO 2：把 0 换成生成 10、20、30 的表达式。 */
        p[i] = 0;
    }
    print_values("初始 3 个: ", p, initial_count);

    /* TODO 3：把 NULL 换成 realloc 调用，把 p 扩到 grown_count 个 int。
     * 保留 temporary；不要写 p = realloc(...)，否则失败时会丢失原指针。
     */
    int *temporary = NULL;
    if (temporary == NULL) {
        puts("TODO：尚未扩容，或扩容失败；已释放原数组。");
        free(p);
        return EXIT_SUCCESS;
    }
    p = temporary; /* 成功后只用返回的新指针，不比较或读取旧指针。 */
    for (size_t i = initial_count; i < grown_count; ++i) {
        /* TODO 4：把 0 换成生成 40、50、60 的表达式。
         * 不重写前 3 个元素：观察它们是否由 realloc 保留。
         */
        p[i] = 0;
    }
    print_values("扩容到 6 个: ", p, grown_count);

    /* TODO 5：把 NULL 换成 realloc 调用，缩到 shrunk_count 个 int。 */
    temporary = NULL;
    if (temporary == NULL) {
        puts("TODO：尚未缩容，或缩容失败；已释放现有数组。");
        free(p);
        return EXIT_SUCCESS;
    }
    p = temporary;
    /* 缩容成功后只能访问前 2 个元素。 */
    print_values("缩容到 2 个: ", p, shrunk_count);

    free(p);
    p = NULL;
    return EXIT_SUCCESS;
}
