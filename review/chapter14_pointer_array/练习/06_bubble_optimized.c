/*
第14章：冒泡排序优化（12–13页）

题目：在自己写的冒泡排序中加入标志，一整趟没有交换就提前结束。统计比较次数，比较有序、接近有序和逆序数据。

请在下面从头编写代码。
*/
#include <stdio.h>
void bubble_sort(int arr[],int sz);
void print(int arr[],int sz,char str[]);
int main ()
{
    int arr[100];
    int i = 0;
    while (i<100&&scanf("%d",arr+i)==1)
    {
        i++;
    }
    int sz = i;
    print(arr,sz,"原来的");
    bubble_sort(arr,sz);
    print(arr,sz,"现在的");
    return 0;
}
void bubble_sort(int arr[],int sz)
{
    int flag = 1;
    int count = 0;
    for(int i = 0;i<sz-1;i++)
    {
        count++;
        for(int j = 0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 0;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag)
        break;
    }
    printf("次数:%d\n",count);
}
void print(int arr[],int sz,char str[])
{
    printf("%s:",str);
    for(int i = 0;i < sz;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
