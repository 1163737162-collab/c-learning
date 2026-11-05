#include <stdio.h>
int main()
{
    int m, n;
    int res = 0;
    scanf("%d %d", &m, &n);
    for (int x = m; x <= n; x++)
    {
        int flag = 1;
        if (x == 1)
            continue;
        for (int i = 2; i < x / i; i++)
        {
            if (x % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("%d\n", x);
            res++;
        }
    }
    printf("%d\n", res);

    return 0;
}