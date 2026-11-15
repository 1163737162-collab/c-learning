#include <stdio.h>
int main(void) {
    int a[]={1,2,3,4,5}, b[]={2,3,4}, c[]={3,4,5,6,7};
    int *rows[]={a,b,c};
    size_t lengths[]={sizeof a/sizeof a[0],sizeof b/sizeof b[0],sizeof c/sizeof c[0]};
    for(size_t i=0;i<3;++i) for(size_t j=0;j<lengths[i];++j) printf("%d%c",rows[i][j],j+1==lengths[i]?'\n':' ');
    rows[1][2]=99; printf("b[2]=%d\n",b[2]);
    /* 各行是独立数组，彼此不保证相邻。 */
    return 0;
}
