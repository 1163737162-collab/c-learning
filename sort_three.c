#include <stdio.h>
void method1();
void method2();
int main ()
{
    method1();
    method2();
    return 0;
}
void method1(void)//我的第一种方法
{
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if (a > b && b > c)
    {
        printf("%d %d %d",a,b,c);
    }
    else if (b > a && a > c)
    {
        printf("%d %d %d",b,a,c);
    }
    else if (a > c && c > b)
    {
        printf("%d %d %d",a,c,b);
    }
    else if (b > c && c > a)
    {
        printf("%d %d %d",b,c,a);
    }
    else if (c > a && a > b)
    {
        printf("%d %d %d",c,a,b);
    }
    else if (c > b && b > a)
    {
        printf("%d %d %d",c,b,a);
    }
    else 
    {
        printf("Something else\n");
    }
    
}  
void method2(void)//排序
{
    int a, b, c,t;
    scanf("%d %d %d",&a, &b, &c);
    if (c > a)
    {
        t = c;
        c = a;
        a = t;
    }
    if ( b > a )
    {
        t = b;
        b = a;
        a = t;
    }
    if (c > b)
    {
        t = c;
        c = b;
        b = t;
    }
    printf("%d %d %d",a,b,c);
}