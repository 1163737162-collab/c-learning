#include <stdio.h>
int main ()
{ 
    double a,ca;
    int b,cb,cost;
    if(scanf("%lf %d",&a,&b) !=2)
    {
        return 1;
    }
    if(a<=3)
    {
        ca = 10;
    }
    else if(a<=10)
    {
        ca = 10+(a-3)*2;
    }
    else
    {
        ca = 27+(a-10)*3;
    }
    cb = (b/5)*2;
    cost = ca+cb+0.5;
    printf("%d",cost);
    return 0;
}