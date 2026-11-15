/* 按用户指定主题准备；尚未对照第15章PDF。 */
/* 目标：申请 4 个 int，填入 10、20、30、40，再输出并释放。
 * 完成后的预期输出：malloc: 10 20 30 40
 * 当前可以安全编译运行；未填写分配表达式时会提示 TODO 并退出。
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const size_t count = 4;
    /* TODO 1：把 NULL 换成 malloc 调用，字节数用 count * sizeof *p。 */
    int *p = NULL;
    if (p == NULL) {
        puts("TODO：尚未申请空间，或 malloc 分配失败。");
        return EXIT_SUCCESS;
    }

    for (size_t i = 0; i < count; ++i) {
        /* TODO 2：把 0 换成根据 i 计算 10、20、30、40 的表达式。 */
        p[i] = 0;
    }
    printf("malloc: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%d%s", p[i], i + 1 < count ? " " : "\n");
    }

    /* 清理已经提供：申请成功后的每条正常路径都要释放。 */
    free(p);
    p = NULL;
    return EXIT_SUCCESS;
}
