#include <stdio.h>

void my_strcpy(char *s1, char *s2)
{
    while (*s2++=*s1++)
    {
        ;
    }
    *s2 = '\0';
}
