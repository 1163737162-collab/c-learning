#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    int maxIdex = 0;
    int minIdex = 0;
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > arr[maxIdex])
            maxIdex = i;
        if (arr[i] < arr[minIdex])
            minIdex = i;
    }
    printf("max=%d, min=%d\n", arr[maxIdex], arr[minIdex]);
    int temp = arr[maxIdex];
    arr[maxIdex] = arr[minIdex];
    arr[minIdex] = temp;
    for (int i = 0; i < 10; i++)
        printf("%5d", arr[i]);
    return 0;
}