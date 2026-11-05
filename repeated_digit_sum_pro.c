#include <stdio.h>
int main()
{
    int a,n;
    int s=0;
    scanf("%d %d",&a,&n);
    int temp = a;
    for (int i = 0;i<n;i++)
    {
        s +=a;
        a = a*10 + temp;
    }
    printf("s = %d",s);
    return 0;
}