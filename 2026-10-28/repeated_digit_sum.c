#include <stdio.h>
int main ()
{
    int a, n, sum=0, term = 0;
    scanf("%d %d",&n,&a);
    for (int i =1;i <= n ;i++)
    {
       term = term*10 + a;
       sum += term;
    }
    printf("%d",sum);
    return 0; 
}