#include <stdio.h>
int Find_min (int arr[3][4],int r,int c);
int main ()
{
    int arr[3][4];
    for (int i = 0;i < 3;i++)
        {
            for (int j = 0;j < 4;j++)
                {
                    scanf("%d",&arr[i][j]);
                }
        }
     int min = Find_min (arr,3,4);
    printf("min=%d",min);
    return 0;
}
int Find_min (int arr[3][4],int r,int c)
{
    int min = arr[0][0];
    for (int i = 0; i<r;i++)
        {
            for (int j = 0;j<c;j++)
                {
                    if (arr[i][j]<min)
                        min = arr[i][j];
                }
        }
    return min;
}
