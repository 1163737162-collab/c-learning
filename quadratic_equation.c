#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, x1, x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (b*b-4*a*c <0)
    {
        printf("no solution!");
    }
    else 
    {
        x1 = (-b-sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b+sqrt(b*b-4*a*c))/(2*a);
        if (x1>x2)
        {
        double temp = x1;
        x1 = x2;
        x2 = temp;
        }
    printf("%.2f %.2f", x1, x2);
    }
    

    return 0;
}
