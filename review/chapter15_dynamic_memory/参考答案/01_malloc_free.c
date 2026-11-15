/* 按用户指定主题准备；尚未对照第15章PDF。 */
/* 目标：申请 4 个 int，逐个初始化，使用后释放。
 * 预期输出：malloc: 10 20 30 40
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const size_t count = 4;
    /* sizeof *p 表示一个元素的大小；malloc 得到的内容尚未初始化。 */
    int *p = malloc(count * sizeof *p);
    if (p == NULL) {
        fputs("malloc 分配失败。\n", stderr);
        return EXIT_FAILURE;
    }

    /* 先写入每个元素，再读取；不能直接打印刚申请的内容。 */
    for (size_t i = 0; i < count; ++i) {
        p[i] = (int)(i + 1) * 10;
    }
    printf("malloc: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }

    free(p);
    p = NULL; /* 之后不再通过原指针访问已经释放的空间。 */
    return EXIT_SUCCESS;
}
