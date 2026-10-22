#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    if (scanf("%d %d %d",&a, &b, &c) != 3)
    {
        return 1;
    }
    double s = (a + b + c)/2.0;
    if (a + b >c  && a +c > b && b + c > a)
    {
        double area = sqrt(s*(s-b)*(s-c)*(s-a));
        printf("area = %.2f; perimeter = %.2f",area,2*s);
    }
    else
    {
        printf("These sides do not correspond to a valid");
    }
    return 0;
}