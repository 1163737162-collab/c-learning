/*
指针遍历和修改数组

题目：定义数组 {3, 6, 9, 12, 15}，使用指针遍历打印，再通过指针把每个元素加 2，打印修改后的数组。不要用数组下标访问元素。

完成后的输出示例：
原数组：3 6 9 12 15
修改后：5 8 11 14 17

请在下方 TODO 处自己完成。
*/

#include <stdio.h>
void print(int *p,int r);
int main(void)
{
    int arr[] = {3, 6, 9, 12, 15};
    int *p = arr;
    // TODO：通过 p 遍历、修改、再次打印。
    print (p,5);

    return 0;
}
void print (int *p,int r)
{
    printf("原来的数组:");
    for (int i = 0;i<r;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    for(int i = 0;i<r;i++)
    {
        *(p+i) +=2;
    }
    printf("修改后:");
    for(int i = 0;i<r;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");

}
