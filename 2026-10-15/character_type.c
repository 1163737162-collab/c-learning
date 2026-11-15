#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a>=0 && a <=9)
    {
        printf("数字");
    }
    else if (a >= 'a'&& a <='z')
    {
        printf("小写字母");
    }
    else if (a >='A'&& a <='Z')
    {
        printf("大写字母");
    }
    else
    {
        printf("其他类型");
    }
    return 0;
}