#include <stdio.h>
int age (int n);
int main ()
{
    int n;
    scanf("%d",&n);
    printf("Number %d is %d age!",n,age(n));
    return 0;
}
int age (int n)
{
    if(n==1)
        return 10;
    else
        return age(n-1)+2;
}
