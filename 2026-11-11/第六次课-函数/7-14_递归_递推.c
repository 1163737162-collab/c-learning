#include <stdio.h>
int f(int n,int f1,int a,int b);
int main()
{
    int n,f1,a,b;
    while(scanf("%d %d %d %d",&n,&f1,&a,&b)==4)
        {
    printf("%d",f(n,f1,a,b));
            printf("\n");
        }
    return 0;
            
}
int f(int n,int f1,int a,int b)
{
    if(n==1)
        return f1;
    else
        return a*f(n-1,f1,a,b)+b;
}
