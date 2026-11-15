#include <stdio.h>
#include <string.h>
int main(void) {
    char ch='w'; char *pc=&ch; *pc='W';
    char a[]="hello bit.", b[]="hello bit.";
    const char *p="hello bit.", *q="hello bit.";
    printf("字符：%c\n", ch);
    printf("数组地址相同：%d；字面量地址相同：%d\n", &a[0]==&b[0], p==q);
    printf("数组内容相同：%d；字面量内容相同：%d\n", strcmp(a,b)==0, strcmp(p,q)==0);
    a[0]='H';
    printf("修改后：%s / %s；内容相同：%d\n", a,b,strcmp(a,b)==0);
    /* 字面量不能修改，相同字面量是否共享地址没有保证。 */
    return 0;
}
