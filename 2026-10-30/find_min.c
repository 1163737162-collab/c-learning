#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    int j = 0;
    int index = 0;
    for (j = 1; j < 10; j++)
    {
        if (min >= arr[j])
        {
            min = arr[j];
            index = j;
        }
    }
        printf("%d %d\n", arr[index], index);
        return 0;
    }