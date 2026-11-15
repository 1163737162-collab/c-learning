#include <stdio.h>
int isPrime(int);
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int res = 0;
    for (int i = m; i <= n; i++)
    {
        if (i == 1)
            continue;
       
        if (isPrime(i))
        {
            printf("%d\n",i);
            res++;
        }
    }
    printf("%d\ns",res);
    return 0;
}
int isPrime(int x)
{
    for (int j = 2; j <= x / j; j++)
    {
        if (x % j == 0)
        {
            return 0;
        }
    }
    return 1;
}