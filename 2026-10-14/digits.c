#include <stdio.h>
int main()
{
    int a, bai, shi, ge;
    scanf("%d", &a);
    bai = a / 100;
    shi = a /10 % 10;
    ge = a % 10;
    printf("%d %d %d\n", bai, shi, ge);
    return 0;
}