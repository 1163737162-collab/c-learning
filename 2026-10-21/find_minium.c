#include <stdio.h>
int main()
{
    int n,min;
    scanf("%d",&n);
    scanf("%d",&min);
    for(int i = 2;i<= n;i++)
    {
        int temp;
        scanf("%d",&temp);
        if ( temp <= min)
        min = temp;
    }
    printf("min = %d",min);

    return 0;
}