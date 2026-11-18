/* 安全参考实现；先尝试独立完成练习。 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *str = malloc(100);
    if (str == NULL) return EXIT_FAILURE;
    strcpy(str, "hello");
    printf("%s\n", str);
    free(str);
    str = NULL;
    str = malloc(100);
    if (str == NULL) return EXIT_FAILURE;
    strcpy(str, "world");
    printf("%s\n", str);
    free(str);
    str = NULL;
    return 0;
}
