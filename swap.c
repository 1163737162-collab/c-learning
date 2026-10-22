#include <stdio.h>
int main()
{
    char a, b, temp;
    scanf("%c %c", &a, &b);
    temp =a;
    a = b;
    b = temp;
    printf ("%c %c\n", a, b);
    return 0;
}