#include <stdio.h>
int main()
{
    int h, n;
    scanf("%d %d", &h, &n);
    double height = h;
    double sum = h;
    if (n==0)
    {
        sum=0;
        height=0;
    }
    for (int i = 2; i <= n; i++)
    {
        height = height / 2;
        sum += 2 * height;
    }
    printf("%.1f %.1f\n", sum, height/2);
    return 0;
}