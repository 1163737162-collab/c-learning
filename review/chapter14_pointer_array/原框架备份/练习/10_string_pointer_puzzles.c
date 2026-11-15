/* 讲义 p18-20：最后两道字符串指针题。第20页是第2题的指向图。
 * 原表达式保留；只把字符串元素类型改为const char，禁止写入字面量。
 * 这是“预测/解释”题，程序不印参考答案，开启开关后才运行原题供验证。
 * TODO：先填《复习记录.md》，再分别把下面的开关改为1。
 */
#include <stdio.h>

static void puzzle_one(void)
{
    const char *a[] = {"work", "at", "alibaba"};
    const char **pa = a;
    /* TODO 1：pa++改变谁？步长是什么？下一行输出哪一个字符串？ */
    pa++;
    printf("%s\n", *pa);
}

static void puzzle_two(void)
{
    const char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
    const char **cp[] = {c + 3, c + 2, c + 1, c};
    const char ***cpp = cp;
    /* TODO 2：按顺序追踪，每行记下cpp-cp、cp[2]-c及输出。
     * 四条语句有状态延续，不要把每行当成“重新初始化后”的独立题。
     * 下面的四个表达式保持讲义顺序与写法。
     */
    printf("%s\n", **++cpp);
    printf("%s\n", *--*++cpp + 3);
    printf("%s\n", *cpp[-2] + 3);
    printf("%s\n", cpp[-1][-1] + 1);
}

int main(void)
{
    int run_one = 0; /* TODO：完成第1题预测后改成1。 */
    int run_two = 0; /* TODO：完成第2题追踪表后改成1。 */
    if (run_one) {
        puts("练习1，运行核对：");
        puzzle_one();
    }
    if (run_two) {
        puts("练习2，运行核对：");
        puzzle_two();
    }
    if (!run_one && !run_two) {
        puts("TODO：先预测原题输出，再打开run_one/run_two验证。");
    }
    /* TODO 3：另写一个函数，每次先重新声明c/cp/cpp。
     * 把第二题的复杂表达式拆成一条语句只做一步的形式，再比较两版输出。
     * 不要在printf参数里重复放带++/--的表达式来调试。
     */
    return 0;
}
