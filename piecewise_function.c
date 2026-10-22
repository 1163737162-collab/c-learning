#include <stdio.h>
int main()
{
    double a, res;
    scanf("%lf",&a);
    if (a == 0)
    {
        res = 0;
        printf("f(%.1f) = %.1f", a, res);
    }
    else
    {
        res = 1 / a;
        printf("f(%.1f) = %.1f",a, res);
    }
    return 0;
}