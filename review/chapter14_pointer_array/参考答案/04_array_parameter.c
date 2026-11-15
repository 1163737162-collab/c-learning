#include <stdio.h>
static int sum(const int a[], size_t n) {
    int total=0;
    for (size_t i=0; i<n; ++i) total+=a[i];
    return total;
}
static void change_first(int *a, size_t n) { if (n>0) *a=100; }
int main(void) {
    int a[]={2,4,6,8}; size_t n=sizeof a / sizeof a[0];
    printf("和=%d\n",sum(a,n)); change_first(a,n);
    printf("原数组首元素=%d\n",a[0]);
    /* 形参指向原数组元素；长度需由调用者传入。 */
    return 0;
}
