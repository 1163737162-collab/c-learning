/* 按用户指定主题准备；尚未对照第15章PDF。 */
/* 目标：用 calloc 申请 4 个 int，观察初始值，再把第 3 个改为 99。
 * 完成后的预期输出：
 * calloc 初始值: 0 0 0 0
 * 修改后: 0 0 99 0
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const size_t count = 4;
    /* TODO 1：把 NULL 换成 calloc 调用，参数为元素个数和 sizeof *p。
     * 本题必须用 calloc；若改用 malloc，读取前还需要手动初始化。
     */
    int *p = NULL;
    if (p == NULL) {
        puts("TODO：尚未申请空间，或 calloc 分配失败。");
        return EXIT_SUCCESS;
    }

    printf("calloc 初始值: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }
    /* TODO 2：把 0 换成目标值；解释为什么第 3 个元素的下标是 2。 */
    p[2] = 0;
    printf("修改后: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }

    free(p);
    p = NULL;
    return EXIT_SUCCESS;
}
