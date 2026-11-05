#include <stdio.h>
int number(int x);
int main()
{
    int found = 0;
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (number(i))
        {
            found = 1;
            printf("%d = 1", i);
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }
    if (found == 0)
        printf("None\n");

    return 0;
}
int number(int x)
{
    int count = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            count += i;
        }
    }
    return count == x;
}