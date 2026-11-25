void fun(char s1[80], char s2[40])
{
    while (*s1) s1++;
    while ((*s1++ = *s2++) != '\0')
        ;
}
