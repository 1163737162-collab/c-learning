#include <stdio.h>
int main ()
{
    double a, b;
    scanf ("%lf %lf",&a,&b);
    double width =(b-a)/10000.0;
    double x = a + width/2;
    double sum = 0;

    for (int i = 1; i <= 10000; i++)
    {
        sum += x * x * width;
        x += width;
    }
    printf("%.4f",sum);
    return 0;
    
}