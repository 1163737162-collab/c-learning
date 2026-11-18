/*
 * 依据第15章讲义整理，安全参考实现。
 * 主题：分配、边界、所有权和释放。
 * 这是独立的安全示例；错误写法请看“内存错误辨析.md”，不要运行。
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const size_t count = 5;

    /* base 保留分配起点，负责最后一次且仅一次释放。 */
    int *base = malloc(count * sizeof *base);
    if (base == NULL) {
        fputs("内存申请失败。\n", stderr);
        return EXIT_FAILURE;
    }

    /* 先初始化，再读取；有效下标是 0 到 count - 1。 */
    for (size_t i = 0; i < count; ++i) {
        base[i] = (int)(i + 1) * 10;
    }

    /* cursor 只负责遍历，不能拿它代替 base 传给 free。 */
    int *cursor = base;
    printf("数组：");
    for (size_t i = 0; i < count; ++i) {
        printf(" %d", *cursor);
        ++cursor;
    }
    putchar('\n');
    /* 此时 cursor 指向末尾之后：可以形成这个指针，不能解引用。 */

    int *alias = base + 1;
    printf("别名读取第二个元素：%d\n", *alias);

    const char *text = "完成度：100%";
    printf("%s\n", text); /* 固定格式串；text 的 % 只是普通字符。 */

    /* 本例掌握所有别名：释放前让它们停止指向这块内存。 */
    cursor = NULL;
    alias = NULL;
    free(base);
    base = NULL;

    free(base); /* free(NULL) 合法，什么也不做，不是重复释放原内存。 */
    puts("已释放内存，并清空本例中的所有相关指针。");
    return EXIT_SUCCESS;
}
