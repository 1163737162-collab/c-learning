/*
定义整数数组，用指针指向首元素。输出指针及其加一后的地址和值，观察移动距离；只在数组范围内解引用。
*/
#include<stdio.h>
int main(void)
{
    // TODO: 自己完成练习。
    int arr[]={1,2,3};
    int* pa = arr;
    char c[]={'a','b'};
    char* pb = c;
    printf("%d\n",*pa);
    printf("%d\n",*(pa+1));
    printf("%p\n",pa);
    printf("%p\n",pa+1);
    printf("%p\n",pb);
    printf("%p\n",(pb+1));
    return 0;
}
