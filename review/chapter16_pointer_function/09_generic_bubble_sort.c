/*
第 9 题　用回调写通用冒泡排序（讲义第 15～17 页，加餐）

题目
1. 实现 generic_sort，参数形式和 qsort 一样，但内部使用冒泡排序。
2. 用字节指针和 width 找到相邻元素。由 compare 判断顺序，交换可用第 8 题的函数。
3. 元素个数小于 2 时直接结束。一整趟未交换时可以提前结束。
4. 先用整型数组验证。至少测试普通、有重复值、单元素和空范围。

预期输出
5 1 4 2 8 → 1 2 4 5 8
3 1 3 2 → 1 2 3 3
9 → 9
空范围 → 直接返回，不访问元素
*/

#include <stdio.h>
#include <string.h>

void bubble_sort(void *base, size_t count, size_t size, int (*compare)(const void *, const void *));
void swap_bytes(void *left, void *right, size_t size);
int int_compare(const void *p, const void *pp);
int char_compare(const void*p,const void *pp);
int main(void)
{
    // TODO：准备测试数组和整型比较函数，再调用 generic_sort。
    int a[5] = {5,1,4,2,8};
    char b[80] = "aacd";
    size_t num = sizeof(a)/sizeof(a[0]);

    bubble_sort(a,num,sizeof(int),int_compare);
    bubble_sort(b,strlen(b),sizeof(b[0]),char_compare);//这里注意不是sizeof 因为如果是sizeof的话就包括了\0，交换的时候安排在第一个,就直接打印不出来字符串。
    for(size_t i = 0;i < num;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("%s",b);
    return 0;
}
void bubble_sort(void *base, size_t count, size_t size, int (*compare)(const void *, const void *))
{
    if(count<2)
    return;
    for (size_t i = 0; i < count - 1; i++)
    {
        for (size_t j = 0; j < count - i - 1; j++)
        {
            if (compare((char *)base + j * size, (char *)base + (j + 1) * size) > 0)
            swap_bytes((char*)base + j*size,(char*)base + (j+1)*size,size);
        }
    }
}
int int_compare(const void *p, const void *pp)
{
    return (*(int *)p - *(int *)pp);
}
int char_compare(const void*p,const void *pp)
{
    return (strcmp((char*)p , (char*)pp));
}
void swap_bytes(void *left,void *right,size_t size)
{
    for(size_t i = 0;i<size;i++)
    {
        char temp = *((char*)left+i);
        *((char*)left+i )= *((char*)right+i);
        *((char*)right+i) = temp;
    }
}
