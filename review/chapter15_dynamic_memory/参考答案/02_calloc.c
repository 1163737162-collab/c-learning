/* 按用户指定主题准备；尚未对照第15章PDF。 */
/* 目标：观察 calloc 创建的 int 数组初始值，再修改一个元素。
 * 预期输出：
 * calloc 初始值: 0 0 0 0
 * 修改后: 0 0 99 0
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const size_t count = 4;
    /* calloc 的两个参数分别是元素个数、每个元素的字节数。 */
    int *p = calloc(count, sizeof *p);
    if (p == NULL) {
        fputs("calloc 分配失败。\n", stderr);
        return EXIT_FAILURE;
    }

    /* calloc 将所有位清零；这里的 int 元素初始值均为 0。 */
    printf("calloc 初始值: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }
    p[2] = 99; /* 下标从 0 开始，p[2] 是第 3 个元素。 */
    printf("修改后: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }

    free(p);
    p = NULL;
    return EXIT_SUCCESS;
}
