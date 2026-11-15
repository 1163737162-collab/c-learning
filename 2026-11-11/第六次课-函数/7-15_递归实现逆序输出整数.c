#include <stdio.h>
void reverse(int n);
int main ()
{
    int n;
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n>0&&n<10)
        printf("%d",n);
    else
    {
        printf("%d",n%10);
        reverse(n/10);
    }
        
}
