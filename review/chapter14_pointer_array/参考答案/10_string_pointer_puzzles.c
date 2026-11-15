#include <stdio.h>
int main(void) {
    const char *a[]={"work","at","alibaba"};
    const char **pa=a; ++pa; printf("%s\n",*pa); /* at */
    const char *c[]={"ENTER","NEW","POINT","FIRST"};
    const char **cp[]={c+3,c+2,c+1,c};
    const char ***cpp=cp;
    printf("%s\n",**++cpp);          /* POINT：cpp指向cp[1] */
    printf("%s\n",*--*++cpp+3);     /* ER：cpp到cp[2]，cp[2]由c+1变为c */
    printf("%s\n",*cpp[-2]+3);      /* ST：cp[0]指向c[3] */
    printf("%s\n",cpp[-1][-1]+1);   /* EW：从cp[1]所指c[2]回到c[1] */
    return 0;
}
