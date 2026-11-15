#include <stdio.h>
int main ()
{
    int a, b;
    char c;
    scanf("%d%c%d",&a, &c, &b);
    if (((a %4 ==0 && a % 100 != 0)|| a %400 == 0 )&& b ==2 )
    {
        printf("%d年%d月的天数为:29", a, b);
    }
    else if (b ==2)
    {
        printf("%d年%d月的天数为:28",a, b);
    }
    else if (b==1||b==3||b==5||b==7||b==8||b==10||b==12)
    {
        printf("%d年%d月的天数为31", a, b);
    }
    else 
    {
        printf("%d年%d月的天数为30", a, b);
    }
    return 0;
}