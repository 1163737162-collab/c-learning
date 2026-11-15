/*
自己编写 my_strlen，用指针遍历以 '\0' 结尾的字符串并返回字符数。用空字符串和普通字符串测试，不要调用 strlen。
*/
#include <stdio.h>
size_t my_strlen(char *s);
int main(void)
{
    // TODO: 自己完成练习。
    char str[] = "";
    printf("%zu", my_strlen(str));

    return 0;
}
size_t my_strlen(char *s)
{
    int len = 0;
    while (*s)
    {
        len++;
        s++;
    }
    return len;
}
