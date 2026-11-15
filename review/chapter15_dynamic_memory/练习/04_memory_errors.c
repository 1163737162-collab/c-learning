/*
 * 按用户指定主题准备；尚未对照第15章PDF。
 * 主题：分配、边界、所有权和释放。
 * 当前是安全练习桩：不分配内存、不读取未初始化数据、不泄漏。
 * 错误写法只用来辨析，绝对不要复制到可执行语句中运行。
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const size_t count = 5;

    /* TODO 1：把 NULL 改成申请 count 个 int 的表达式。
     * 思考：为什么用 sizeof *base？申请失败时应怎样退出？
     */
    int *base = NULL;
    if (base == NULL) {
        puts("当前是安全练习桩：尚未申请内存。");
        /* TODO 1 完成后，这里应报告申请失败并返回 EXIT_FAILURE。 */
        return EXIT_SUCCESS;
    }

    printf("计划使用 %zu 个 int。\n", count);

    /* TODO 2：用循环初始化为 10、20、30、40、50，再用循环输出。
     * 写出合法下标范围；解释 i < count 与 i <= count 的差别。
     * 在完成初始化前，不要读取 base[i]。
     */

    /* TODO 3：定义 cursor 从 base 开始遍历；保留 base 的分配起点。
     * 思考：循环结束后 cursor 在哪里？为什么不能 free(cursor)？
     */

    /* TODO 4：定义 alias = base + 1，读取第二个元素。
     * 在下方 free(base) 之前，将你新增的 cursor、alias 都设为 NULL。
     * 思考：仅把 base 设为 NULL，为什么不能自动修复其他别名？
     */

    /* TODO 5：用固定格式串输出含有 % 的文本“完成度：100%”。
     * 思考：为什么 printf(text) 不等于 printf("%s", text)？
     */

    /* 保留这个清理出口：只释放分配起点，释放后不再访问原内存。 */
    free(base);
    base = NULL;
    free(base); /* 解释为什么这一句合法。 */
    return EXIT_SUCCESS;
}
