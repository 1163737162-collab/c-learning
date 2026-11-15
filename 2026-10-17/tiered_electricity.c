#include <stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if (a <= 50)
    {
        printf("cost = %.2f",a * 0.53);
    }
    if (a > 50)
    {
        printf("cost = %.2f",50*0.53+(a-50)*(0.53+0.05));
    }
    return 0;
}