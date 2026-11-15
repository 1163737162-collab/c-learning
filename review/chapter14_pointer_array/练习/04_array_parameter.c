/*
第4题：一维数组传参（讲义第9–10页）

1. 在 main 中定义整型数组，内容为 2、4、6、8。
   计算数组元素个数，打印原数组。

2. 自己写求和函数 sum：
   接收数组和元素个数，遍历并累加所有元素，再返回总和。
   在 main 中调用它并打印结果。先手算，运行后核对。

3. 再自己写修改函数：
   接收数组和元素个数；数组非空时，把第一个元素改成 100。
   在 main 中调用它，再打印数组，看看哪个元素变化了。

4. 思考：为什么函数内修改元素后，main 中的数组也改变了？
   尝试用指针形式写形参；为什么还需要传入元素个数？
   长度为 0 时，函数不能访问数组元素。

在下面继续写自己的代码。
*/
#include <stdio.h>
int sum (int *pa,size_t r);
void change (int *pa,size_t r);
int main ()
{
    int arr[4] = {2,4,6,8};
    int *pa = arr;
    size_t sz = sizeof(arr)/sizeof(arr[0]);
    printf("和:%d\n",sum(arr,sz));
    change(pa,sz);
    printf("%d",*pa);


    return 0;
}
int sum (int *pa,size_t r)
{
    int sum = 0;
    for(int i = 0;i<r;i++)
    {
        sum += *(pa+i);
    }
    return sum;
}
void change (int *pa,size_t r)
{
    *pa = 100;
}


