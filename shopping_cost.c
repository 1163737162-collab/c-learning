#include <stdio.h>
int main ()
{
    double a, b, c;
    scanf("%lf %lf %lf",&a, &b, &c);
    if(a<9.9)
    {
        a += 0.99;

    }
    if(b<9.9)
    {
        b += 0.99;
    }
    if(c<9.9)
    {
        c += 0.99;
    }
    double sum = a + b + c ;
    printf("%.2fn",sum);
    return 0;
}