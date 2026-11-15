/*
定义整数数组，分别用下标和指针遍历输出。通过指针修改一个元素，再输出验证。
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // TODO: 自己完成练习。
    int arr[] = {10,20,30,40,50};
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    int* pa = arr;
    for (int i = 0;i < sz ;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0;i<sz;i++)
    {
        printf("%d ",*(pa+i));
        
    }

    return 0;
}
