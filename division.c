#include <stdio.h>
int main()
{
    double a =5/9;
    double b=5.0/9;
    double c=5/9.0;
    printf("%f\n %f\n %f\n", a, b, c);
    double d = (double)(5/9);
    double e = (double)5/9;
    printf("%f\n%f\n", d, e);
    return 0;
}