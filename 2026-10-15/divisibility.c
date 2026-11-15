#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c3 = ( n%3 ==0);
    int c5 = ( n%5 ==0);
    int c7 = ( n%7 ==0);
    if(c3 && c5 && c7)
    {
        printf("能同时被3,5,7整除");
    }
    else if(c3 && c5)
    {
        printf("能被3,5整除");
    }
    else if (c3 && c7)
    {
        printf("能被3,7整除");
    }
     else if (c5 && c7)
     {
        printf("能被5,7整除");
     }
     else if (c3)
     {
        printf("能被3整除");
     }
     else if (c5)
     {
        printf ("能被5整除");
     }
     else if (c7)
     {
        printf ("能被7整除");
     }
     else
     {
        printf("不能被任何一个数整除");
     }
    return 0;
}