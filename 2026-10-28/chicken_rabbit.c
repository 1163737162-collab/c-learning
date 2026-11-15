#include <stdio.h>
int main()
{
    int n,m;
    int x, y;
    scanf("%d %d", &n, &m);
    int found = 0;
    for (x = 0; x < n; x++)
    {
        y = n - x;
        if (2 * x + 4 * y == m)
        {
            printf("%d %d", x, y);
            found = 1;
            break;
        }
    }
    if (found != 1)
    printf("0 0");
        return 0;
}