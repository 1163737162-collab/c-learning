/*
自己实现 strcpy

题目：实现 my_strcpy，把 src 的字符和结尾的 \0 一起复制到 dest，返回 dest 的首地址。假设目标数组空间足够且不与源数组重叠。不要调用 strcpy。

完成后的输出示例：
复制后：C language

请在下方 TODO 处自己完成。
*/

#include <stdio.h>

char *my_strcpy(char *dest, const char *src);

int main(void)
{
    char dest[32];
    const char src[] = "C language";
    // TODO：调用 my_strcpy，再用 %s 打印 dest。
    (void)dest; (void)src;
    char *p1 = dest;
    const char *p2 = src;
    printf("复制后:%s\n",my_strcpy(p1,p2));
    return 0;
}

char *my_strcpy(char *dest, const char *src)
{
    // TODO：保存目标首地址，复制字符及 \0，并返回首地址。
    (void)src;
    int i = 0;
    do
    {
        *(dest + i) = *(src + i);
        i++;
    } while (*(dest + i - 1));
    
    return dest; // 占位，尚未复制
}
