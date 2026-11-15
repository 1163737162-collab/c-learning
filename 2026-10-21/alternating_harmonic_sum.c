#include <stdio.h>
int main()
{
    int n;
    double sum;
    scanf("%d",&n);
    for (int i =1;i <= n;i++)
    {
        if (i%2==1)
        sum += 1.0/i;
        else
        sum -= 1.0/i;
    }
    printf ("%.2f",sum);
    return 0;
}