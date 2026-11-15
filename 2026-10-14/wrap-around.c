#include <stdio.h>
int main()
{
    char a, b;
    scanf("%c",&a);
    b = a + 2;
    if(b > 'z')
    {
        b -=26;
        printf("%c",b);
    }
    else
    {
        printf("%c",b);
    }
    return 0;
}