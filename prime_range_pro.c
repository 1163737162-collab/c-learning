#include <stdio.h>
int main ()
{
    int m,n,r,a,b;
    scanf("%d %d",&m,&n);
    a = m;
    b = n;
    while(b!=0)
    {
        r = a%b;
        a = b;
        b = r;

    }
    printf("%d",(m*n)/a);
    return 0;
}