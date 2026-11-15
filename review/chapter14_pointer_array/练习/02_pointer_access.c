/*
第14章：指针访问数组（4–5页）

题目：定义整型数组及首元素指针。用下标和指针遍历，再通过指针修改元素并验证原数组。

请在下面从头编写代码。
*/

#include <stdio.h>
void print(int *pa,int r);
int main ()
{
    int arr[5] = {1,2,3,4,5};
    int *pa = arr;
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    printf("原来的数组：");
    print(pa,sz);
    printf("\n");
    for(int i = 0;i<sz;i++)
    {
        pa[i]= 1;
    }
    printf("现在的数组:");
    print(pa,sz);
    

    return 0;
}
void print(int *pa,int r)
{
    for (int i = 0;i<r;i++)
    {
        printf("%d",*(pa+i));
    }
}