#include <stdio.h>
#include <math.h>
int main()
{
    double x, res;
    scanf("%lf",&x);
    if (x >=0)
    {
        res = sqrt (x);
        printf("f(%.2f) = %.2f\n",x, res);
    }
    if (x < 0)
    {
        res = pow((1+x),2)+2*x+1/x;
        printf("f(%.2f) = %.2f\n",x,res);
    }
    return 0;
}