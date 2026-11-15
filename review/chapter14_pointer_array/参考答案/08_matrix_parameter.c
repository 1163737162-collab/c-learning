#include <stdio.h>
static void print_array(int a[][5],size_t rows) {
    for(size_t i=0;i<rows;++i) for(size_t j=0;j<5;++j) printf("%d%c",a[i][j],j==4?'\n':' ');
}
static void print_pointer(int (*p)[5],size_t rows) {
    for(size_t i=0;i<rows;++i) for(size_t j=0;j<5;++j) printf("%d%c",*(*(p+i)+j),j==4?'\n':' ');
}
static void change(int (*p)[5],size_t rows) { if(rows>1) p[1][2]=99; }
int main(void) {
    int a[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print_array(a,3); puts("指针形式："); print_pointer(a,3);
    change(a,3); printf("修改后=%d\n",a[1][2]);
    /* 列数决定每行类型和行指针的步长。int **不能代替int (*)[5]。 */
    return 0;
}
