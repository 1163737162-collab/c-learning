#include <stdio.h>
static size_t sort(int a[], size_t n) {
    size_t comparisons=0;
    if (n<2) return comparisons;
    for (size_t end=n; end>1; --end) {
        int swapped=0;
        for (size_t j=0; j+1<end; ++j) {
            ++comparisons;
            if (a[j]>a[j+1]) { int t=a[j]; a[j]=a[j+1]; a[j+1]=t; swapped=1; }
        }
        if (!swapped) break;
    }
    return comparisons;
}
static void show(const char *label,int a[],size_t n) {
    size_t count=sort(a,n);
    printf("%s：",label);
    for(size_t i=0;i<n;++i) printf("%d ",a[i]);
    printf("比较%zu次\n",count);
}
int main(void) {
    int a[]={1,2,3,4,5}, b[]={1,2,3,5,4}, c[]={5,4,3,2,1};
    show("有序",a,5); show("接近有序",b,5); show("逆序",c,5); show("空范围",NULL,0);
    return 0;
}
