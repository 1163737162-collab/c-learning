/* 安全参考实现；先尝试独立完成练习。 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char *GetMemory(size_t n) { return malloc(n); }
int main(void) {
    const char text[] = "hello world";
    char *str = GetMemory(sizeof text);
    if (str == NULL) return EXIT_FAILURE;
    strcpy(str, text);
    printf("%s\n", str);
    free(str);
    return 0;
}
