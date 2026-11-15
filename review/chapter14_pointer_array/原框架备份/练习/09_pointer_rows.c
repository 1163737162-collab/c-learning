/* 讲义 p17-18：指针数组模拟二维数组。
 * 先写出parr、parr[0]在表达式中的类型，对比上一题真正的二维数组。
 * TODO：填写行地址、用指针遍历，并通过parr修改arr2中的一个元素。
 * 验收：输出三行讲义数据；把第2行缩短后，按各行长度访问仍不越界。
 */
#include <stdio.h>

static void print_rows(int *rows[], const size_t lengths[], size_t nrows)
{
    /* 这里的rows调整为int **；它指向指针数组的首元素。 */
    (void)rows;
    for (size_t i = 0; i < nrows; ++i) {
        for (size_t j = 0; j < lengths[i]; ++j) {
            int value = 0; /* TODO 2：通过rows[i][j]的等价指针表达式取值。 */
            printf("%d%s", value, j + 1 < lengths[i] ? " " : "\n");
        }
    }
}

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int arr3[] = {3, 4, 5, 6, 7};
    int *parr[3] = {NULL, NULL, NULL}; /* TODO 1：填入三个数组的首元素地址。 */
    size_t lengths[] = {
        sizeof arr1 / sizeof arr1[0],
        sizeof arr2 / sizeof arr2[0],
        sizeof arr3 / sizeof arr3[0]
    };
    for (size_t i = 0; i < 3; ++i) {
        if (parr[i] == NULL) {
            puts("TODO：先填写parr中的三个行地址。");
            return 0;
        }
    }
    printf("指针数组占%zu字节，每个元素占%zu字节\n", sizeof parr, sizeof parr[0]);
    puts("未填写遍历表达式时，下面都是占位0：");
    print_rows(parr, lengths, 3);
    /* TODO 3：通过parr把第2行第3列改成99，然后再次打印验证。 */
    printf("arr2[2]=%d\n", arr2[2]);
    /* TODO 4：把arr2改为{2,3,4}再运行；lengths已经按各行计算。
     * 思考：parr+1跨过一个什么对象？为什么不能跨arr1末尾去找arr2？
     * 三个数组各自内部连续，彼此在内存中的相邻关系没有保证。
     */
    return 0;
}
