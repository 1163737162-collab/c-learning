#include <stdio.h>
double f(double x );
int main()
{
    double m, n, mid, res;
    scanf ("%lf %lf",&m,&n);
    if(f(m)*f(n)<0)
    {
        while(n-m>0.00001)
        {
            mid = (m+n)/2;
            if (f(mid)*f(m)<0)
            n = mid;
            else 
            m = mid;
        }
        printf("%.4f",mid);

    }
    else
    {
        printf("指定区间没有实数根");
    }
    return 0;
}
double f(double x )
{
    return 2*x*x*x - 4*x*x + 3*x - 6;
}