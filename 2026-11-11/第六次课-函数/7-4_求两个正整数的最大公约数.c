#include <stdio.h>
int Max(int x,int y);
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",Max(x,y));
    return 0;
}
int Max(int x,int y)
{
    int r=0;
    do
    {
     r=x%y;
    x = y;
    y = r;
    }while(r!=0);
    return x;
}
