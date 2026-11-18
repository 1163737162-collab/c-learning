/* 安全参考实现；先尝试独立完成练习。 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static void GetMemory(char **p, size_t n) { *p = malloc(n); }
int main(void) {
    char *str = NULL;
    GetMemory(&str, 100);
    if (str == NULL) return EXIT_FAILURE;
    strcpy(str, "hello");
    printf("%s\n", str);
    free(str);
    str = NULL;
    return 0;
}
