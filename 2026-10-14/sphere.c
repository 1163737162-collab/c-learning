#include <stdio.h>
#define pi 3.14159
int main()
{
    double r, v, s;
    scanf("%lf", &r);
    v = 4.0 / 3 * pi * r * r *r;
    s = 4 *pi * r *r;
    printf("%.2lf\n", s);
    printf("%.2lf\n", v);
    return 0;
}