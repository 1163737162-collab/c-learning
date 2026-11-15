#include <stdio.h>
int main ()
{
    int n;
    double pi=1;
    scanf("%d",&n);
    for(int i =1;i <=n;i++)
    {
        pi *=(4.0*i*i)/((2.0*i-1)*(2.0*i+1));
    }
    printf("%.7f",2*pi);
    return 0;
}