#include <stdio.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int j = 0; j < n/2; j++)
    {
        int temp = arr[j];
        arr[j] = arr[n - 1 - j];
        arr[n - 1 - j] = temp;
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d,", arr[j]);
    }

    return 0;
}