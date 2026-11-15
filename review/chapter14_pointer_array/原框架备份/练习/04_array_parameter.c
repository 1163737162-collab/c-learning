/*
 * PDF p9-10｜目标：理解数组形参调整为指针；长度 n 要由调用者传入。
 * 手算预测：求和是多少？函数修改首元素后，main 中哪个值会变化？
 * TODO：完成求和函数与修改函数；分别练习下标和指针表达式。
 * 验收观察：求和与手算相符；调用修改函数后，原数组首元素变成 100。
 * 思考：为何不能在函数中用 sizeof(a)/sizeof(a[0]) 获取原数组长度？
 */
#include <stddef.h>
#include <stdio.h>

/* 同一函数的两种声明是兼容的：数组形参会调整为指针形参。 */
static int sum(const int a[], size_t n);
static int sum(const int *a, size_t n);

static int sum(const int a[], size_t n)
{
    /* TODO 1：定义累加器，遍历 n 个元素后返回和；本题数值不会溢出。
       n == 0 时返回 0；不访问 a[0]。 */
    (void)a;
    (void)n;
    return 0;                        /* 占位，填完后替换。 */
}

static void change_first(int *a, size_t n)
{
    /* TODO 2：先判断 n > 0，再通过指针把首元素改为 100。 */
    (void)a;
    (void)n;
}

/* 完整示范：n 来自调用者，不能从指针自身恢复数组长度。 */
static void print_array(const int a[], size_t n)
{
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}

int main(void)
{
    int arr[] = {2, 4, 6, 8};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    puts("练习骨架：sum 返回 0，change_first 尚未实现。");
    printf("调用者计算长度：%zu\n", n);
    printf("main 中 sizeof(arr)：%zu\n", sizeof(arr));
    printf("指针类型的大小：%zu\n", sizeof(int *));
    printf("求和：%d\n", sum(arr, n));
    change_first(arr, n);
    printf("调用修改函数后的原数组：");
    print_array(arr, n);
    printf("空范围求和：%d\n", sum(arr, 0));
    change_first(arr, 0);             /* 填写后也应保持不访问元素。 */

    /* 纸上任务：把 sum 的形参改为 const int *a 后再编译。
       函数体内 sizeof(a) 测的是形参指针大小，不是调用者数组大小。
       不加入 sizeof(数组形参) 的执行示范，以免产生编译器警告。 */
    return 0;
}
