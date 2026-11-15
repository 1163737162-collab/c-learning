/*
第5题：冒泡排序（讲义第11–12页）

1. 在 main 中定义整型数组，例如 5、1、4、2、8。
   计算元素个数，先打印排序前的数组。

2. 自己写一个冒泡排序函数：
   - 接收数组和元素个数，把数组按从小到大排序。
   - 每一趟依次比较相邻两个元素；如果前面的较大，就交换。
   - 思考每一趟结束后，哪个元素已经到达正确位置？
   - 自己确定两层循环的次数，注意不要访问数组边界之外。

3. 在 main 中调用排序函数，再打印排序后的数组。
   先在纸上写出第一趟每次比较后的变化，再运行核对。

4. 换几组数据测试：
   - 逆序：5、4、3、2、1
   - 已经有序：1、2、3、4、5
   - 有重复值：3、1、3、2
   - 只有一个元素；传入元素个数为0的空范围

这题先练基础冒泡排序，优化留到第6题。
*/
#include <stdio.h>
void bubble_sort(int arr[],int sz);
void print(int arr[],int sz,char str[]);
int main ()
{
    int arr[5] = {5,1,4,2,8};
    size_t sz = sizeof(arr)/sizeof(arr[0]);
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
            if(flag)
            break;
        }
    }
    printf("次数:%d",count);
}
void print(int arr[],int sz,char str[])
{
    printf("%s:",str);
    for(int i = 0;i < sz;i++)
    printf("%d",arr[i]);
    printf("\n");
}