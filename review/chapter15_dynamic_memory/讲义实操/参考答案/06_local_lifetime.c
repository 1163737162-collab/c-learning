/* 安全参考实现；先尝试独立完成练习。 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static char *GetMemory(void) {
    const char text[] = "hello world";
    char *result = malloc(sizeof text);
    if (result != NULL) memcpy(result, text, sizeof text);
    return result;
}
int main(void) {
    char *str = GetMemory();
    if (str == NULL) return EXIT_FAILURE;
    printf("%s\n", str);
    free(str);
    return 0;
}
