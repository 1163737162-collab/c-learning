#include <stdio.h>
int main(void) {
    int a[] = {10,20,30,40,50};
    size_t n = sizeof a / sizeof a[0];
    int *p = a;
    for (size_t i=0; i<n; ++i) printf("下标=%d 指针=%d\n", a[i], *(p+i));
    *(p+2) = 99;
    for (size_t i=0; i<n; ++i) printf("%d%c", a[i], i+1==n ? '\n' : ' ');
    return 0;
}
