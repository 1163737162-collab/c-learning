/* 讲义 p14-16：真正的二维数组传参。
 * 先预测a+1前进多少字节；写出a、a[0]、&a的类型。
 * TODO：完成指针版打印，再通过函数把第2行第3列改成99。
 * 验收：两种打印形式得到相同3x5数据，调用后原数组相应元素为99。
 */
#include <stdio.h>

static void print_by_array(int a[][5], size_t rows)
{
    /* 下标版给出作对照；此处形参会调整成 int (*)[5]。 */
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < 5; ++j) {
            printf("%d%s", a[i][j], j + 1 < 5 ? " " : "\n");
        }
    }
}

static void print_by_pointer(int (*p)[5], size_t rows)
{
    (void)p;
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < 5; ++j) {
            int value = 0; /* TODO 1：通过p、i、j与两次解引用取元素，不用[]。 */
            printf("%d%s", value, j + 1 < 5 ? " " : "\n");
        }
    }
}

static void change_one(int (*p)[5], size_t rows)
{
    if (rows < 2) {
        return;
    }
    /* TODO 2：通过p修改第2行第3列。这里可以先用下标，再改写为指针形式。 */
    (void)p;
}

int main(void)
{
    int a[3][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}};
    size_t rows = sizeof a / sizeof a[0];
    printf("一行字节数=%zu，整个数组字节数=%zu\n", sizeof a[0], sizeof a);
    printf("a=%p，a+1=%p\n", (void *)a, (void *)(a + 1));
    puts("下标版（对照）：");
    print_by_array(a, rows);
    puts("指针版（未填写时全为占位0）：");
    print_by_pointer(a, rows);
    change_one(a, rows);
    printf("函数调用后 a[1][2]=%d\n", a[1][2]);
    /* TODO 3：解释为什么这里不能把函数形参改成int **，也不应强转a。
     * 扩展：换成4列时，需要同步修改哪些声明和循环？
     */
    return 0;
}
