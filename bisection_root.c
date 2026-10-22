#include <stdio.h>
int main()
{
    double m, n, x, y, res;
    scanf("%lf %lf", &m, &n);
    x = 2 * m * m * m - 4 * m * m + 3 * m - 6;
    y = 2 * n * n * n - 4 * n * n + 3 * n - 6;
    if (x * y < 0)
        while (n - m < 0.00001)
        {
            res = (m + n) / 2;
            y = 2 * res * res * res - 4 * res * res + 3 * res - 6;
            if (y * x < 0)
                n = res;
            else
                m = res;
        }

    else
        printf("指定区间没有实数根");
    printf("%.4f", res);

    return 0;
}
