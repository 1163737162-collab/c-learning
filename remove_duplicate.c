#include <stdio.h>
int main ()
{
    int T;
    scanf("%d",&T);
    for ( int t = 0;t<T;t++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0;i<n;i++)
        scanf("%d",&arr[i]);
        for (int i = 0;i<n;i++)
        {
            int minIdex = i;
            for(int j =i+1;j<n;j++)
            {
                if (arr[minIdex]>arr[j])
                minIdex = j;
            }
            int temp = arr[i];
            arr[i]=arr[minIdex];
            arr[minIdex]=temp;
        }
        printf("%d",arr[0]);
        for (int i = 1;i<n;i++)
        {
            if (arr[i-1] !=arr[i])
            printf(" %d",arr[i]);
        }
        printf("\n");

    }
    return 0;
}