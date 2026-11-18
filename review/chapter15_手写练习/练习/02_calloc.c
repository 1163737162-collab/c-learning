/*
第2题：calloc 与初始化（讲义第3～4页）
1. 使用calloc申请4个int，判断返回值是否为NULL。
2. 先逐个打印刚申请的4个int，观察初始值。
3. 把第3个元素改成99，再打印4个数。
4. 释放空间并将指针设为NULL。
预期：先输出0 0 0 0，再输出0 0 99 0。
思考：calloc的两个参数各表示什么？与malloc有什么区别？

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h>
void print(int *p,int n);
int main ()
{
    int *p  = (int*)calloc(4,sizeof(int));
    if(p==NULL)
    {
        printf("开辟失败！");
        return 1;
    }
    print(p,4);
    *(p+2) = 99;
    print(p,4);
    free(p);
    p = NULL;
    return 0;
}
void print(int *p,int n)
{
    for (int i = 0;i<n;i++)
    {
        printf("%3d",p[i]);
    }
    printf("\n");
}