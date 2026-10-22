#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, count = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (pow(i / 100, 3) + pow(i % 10, 3) + pow(i / 10 % 10, 3) == i)
            count++;
    }
    printf("%d", count);
    return 0;
}