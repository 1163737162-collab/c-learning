#include <stdio.h>
int main ()
{
    int a[10];
    for(int i = 0;i<10;i++)
        scanf("%d",&a[i]);
    int max = a[0];
    int min = a[0];
    int *p = &max;
    int *pp = &min;
    for(int i = 0;i<10;i++)
        {
            if(*pp>a[i])
                *pp = a[i];
            if(*p<a[i])
                *p= a[i];
        }
    printf("%d",*p - *pp);
    return 0;
}
