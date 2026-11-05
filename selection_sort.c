#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int j = 0; j < n; j++)
    {
        int maxIdex = j;
        for (int k = j + 1; k < n; k++)
        {
            if (arr[maxIdex] < arr[k])
            {
                maxIdex = k;
            }
        }
        int temp = arr[j];
        arr[j] = arr[maxIdex];
        arr[maxIdex] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", arr[i]);
    }

    return 0;
}