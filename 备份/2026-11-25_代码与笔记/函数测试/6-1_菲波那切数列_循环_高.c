#include <math.h>
double Fib(int index)
{
    static double f[1478] = {0, 1};
    static int n = 1;
    while (n < index && isfinite(f[n]))
    {
        n++;
        f[n] = f[n - 1] + f[n - 2];
    }
    return index <= n ? f[index] : f[n];
}
