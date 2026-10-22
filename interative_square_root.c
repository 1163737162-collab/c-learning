#include <stdio.h>
#include <math.h>
int main()
{
    double a, x, y;
    scanf("%lf", &a);
    y = (a==0) ? 1.0: a ;
    while (1)
    {
        x = (y + a / y) / 2;
        if (fabs(x - y) < 0.00001)
            break;
        y = x;
    }
    printf("%.4f", x);
    return 0;
}