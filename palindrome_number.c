#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%10 == a/10000 && a/10%10 == a/1000%10)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}