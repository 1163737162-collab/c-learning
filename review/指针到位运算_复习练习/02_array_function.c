/*
数组作为函数参数

题目：实现 find_max，参数是数组首元素的地址和元素个数，返回最大值。假设个数大于 0，不修改原数组。

完成后的输出示例：
数组：8 -3 17 4 2
最大值：17

请在下方 TODO 处自己完成。
*/

#include <stdio.h>

int find_max(const int *p, int n);

int main(void)
{
    int arr[] = {8, -3, 17, 4, 2};
    // TODO：计算元素个数，调用 find_max 并打印结果。
    int *p = arr;
    (void)arr;
    int sz = (int)sizeof(arr)/sizeof(*p);
    printf("数组:");
    for (int i = 0;i<5;i++)
    printf("%d ",*(p+i));
    printf("\n");
    printf("最大值: %d",find_max(p,sz));

    return 0;
}

int find_max(const int *p, int n)
{
    // TODO：比较 n 个元素并返回最大值。
    (void)p; (void)n;
    int max = *p;
    for(int i = 1;i < n;i++)
    {
        if(*(p+i)>max)
        max = *(p+i);
    }
    return max; // 占位，完成后修改
}
