#include <stdio.h>
static void bubble_sort(int a[], size_t n) {
    if (n<2) return;
    for (size_t end=n; end>1; --end)
        for (size_t j=0; j+1<end; ++j)
            if (a[j]>a[j+1]) { int t=a[j]; a[j]=a[j+1]; a[j+1]=t; }
}
static void show(int a[], size_t n) {
    bubble_sort(a,n);
    if (n==0) puts("空范围");
    for (size_t i=0; i<n; ++i) printf("%d%c",a[i],i+1==n?'\n':' ');
}
int main(void) {
    int reverse[]={5,4,3,2,1}, ordered[]={1,2,3}, repeated[]={3,1,3,-1}, one[]={7};
    show(reverse,5); show(ordered,3); show(repeated,4); show(one,1); show(NULL,0);
    return 0;
}
