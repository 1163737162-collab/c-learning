#include <stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    int a=0,b=0,c=0,count=0;
    for (a=x/5;a>=1;a--)
    {
        for (b=x/2;b>=1;b--)
        {
            c = x - 5*a -2*b;
            if(c<1)
            continue;
            if (5*a+2*b+c==x)
            {
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",a,b,c,a+b+c);
                count++;
            }
        }
    }
    printf("count = %d",count);
    return 0;
}