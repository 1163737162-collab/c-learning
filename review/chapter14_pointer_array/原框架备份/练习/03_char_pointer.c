/*
 * PDF p6-8｜目标：区分可修改字符数组、字符指针与字符串字面量。
 * 手算预测：两个数组内容相同时，首地址是否相同？地址相等代表什么？
 * TODO：填写字符指针、数组修改语句、strcmp 内容比较表达式。
 * 验收观察：ch 被指针修改；两个数组独立；strcmp 相等时返回 0。
 * 相同字面量是否共享地址不由 C 保证；不可断言两指针一定相等。
 * 字面量禁止修改；用 const char * 接收，别去掉 const 强行写入。
 */
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch = 'w';
    char *pc = NULL;                  /* TODO 1：指向 ch。 */
    if (pc != NULL) {
        /* TODO 2：通过 pc 将 ch 改为 'W'。 */
    } else {
        puts("pc 未填写，跳过字符修改。");
    }
    printf("ch = %c\n", ch);

    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    const char *str3 = "hello bit.";
    const char *str4 = "hello bit.";
    const char *a1 = str1;            /* 用指针变量比较，避免数组比较警告。 */
    const char *a2 = str2;

    printf("数组首地址：%p %p\n", (void *)a1, (void *)a2);
    printf("两个数组首地址相等：%d\n", a1 == a2);
    printf("字面量地址：%p %p\n", (void *)str3, (void *)str4);
    printf("本次字面量地址相等：%d\n", str3 == str4);
    puts("字面量地址比较的结果只描述本次构建，不能用于内容比较。");
    printf("字面量首字符（完整示范）：%c\n", str3[0]);

    int same_arrays = 0;             /* TODO 3：strcmp 比较 str1 和 str2 内容。 */
    int same_literals = 0;           /* TODO 4：strcmp 比较 str3 和 str4 内容。 */
    puts("以下布尔值尚为占位；请用 strcmp(...) == 0 得到真假值。");
    printf("数组内容相同：%d；字面量内容相同：%d\n",
           same_arrays, same_literals);

    /* TODO 5：将 str1 首字符改为 'H'。不要修改 str3 指向的字面量。 */

    printf("修改后 str1 = %s\n", str1);
    printf("未修改 str2 = %s\n", str2);
    int same_after = 0;              /* TODO 6：再次比较两数组的内容。 */
    printf("修改后数组内容相同（填写后观察）：%d\n", same_after);
    return 0;
}
