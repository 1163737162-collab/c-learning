/*
第14章：数组名和sizeof（讲义1–5、8页）

题目：定义包含1至10的整型数组。分别打印数组、首元素、首元素指针的大小，并计算元素个数。比较arr、&arr[0]、&arr及各自加1的地址，解释类型和步长。选做讲义第8页六个sizeof表达式。

请在下面从头编写代码。
*/

#include <stdio.h>
int main ()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *p = arr;
    printf("数组的大小= %zu\n首元素的大小 = %zu\n首元素指针的大小 = %zu\n元素个数 = %zu\n",sizeof(arr),sizeof(arr[0]),sizeof(p),(size_t)size);
    printf("arr = %p\n",arr);
    printf("&arr = %p\n",&arr);
    printf("&arr[0] = %p\n",&arr[0]);
    printf("arr + 1 = %p\n",arr + 1);
    printf("&arr + 1 = %p\n",&arr+1);
    printf("&arr[0] + 1 = %p\n",&arr[0]+1 );
    
    return 0;
}