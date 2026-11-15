#include <stdio.h>
int main(void) {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("数组=%zu 首元素=%zu 指针=%zu 元素数=%zu\n", sizeof arr, sizeof arr[0], sizeof(arr + 0), sizeof arr / sizeof arr[0]);
    printf("arr=%p &arr[0]=%p &arr=%p\n", (void *)arr, (void *)&arr[0], (void *)&arr);
    printf("arr+1=%p &arr[0]+1=%p &arr+1=%p\n", (void *)(arr+1), (void *)(&arr[0]+1), (void *)(&arr+1));
    int a[] = {1,2,3,4};
    printf("讲义六题：%zu %zu %zu %zu %zu %zu\n", sizeof a, sizeof(a+0), sizeof *a, sizeof &a, sizeof *&a, sizeof(&a[0]+1));
    /* arr 和 &arr 数值可相同，但一个按元素前进，一个按整个数组前进；尾后地址不可解引用。 */
    return 0;
}
