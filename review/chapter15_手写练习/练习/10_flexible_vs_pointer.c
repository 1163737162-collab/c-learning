/*
第10题：柔性数组与指针成员比较（讲义第14～15页）

目标：用两种结构体分别保存5个整数，观察申请和释放内存的区别。
两组数据都填入 0 1 2 3 4。这里的5个指数组元素，不包括记录个数的成员。

一、先定义两种结构体
1. 第一种：包含一个记录元素个数的int成员，最后一个成员是柔性数组int a[]。
2. 第二种：也包含一个记录元素个数的int成员，另有一个指针成员int *a。
3. 给两种结构体起不同名字，思考两个a分别是什么类型。

二、使用第一种：柔性数组
1. 定义指向第一种结构体的指针。
2. 用一次malloc申请整块空间：结构体本身的大小 + 5个int的大小。
3. 判断申请是否成功；成功后记录元素个数为5。
4. 用循环给a[0]到a[4]分别赋值0到4，再打印这5个元素。

三、使用第二种：指针成员
1. 定义指向第二种结构体的指针，先为结构体本身申请空间并判空。
2. 给它的指针成员另外申请能存放5个int的空间，再次判空。
3. 如果第二次申请失败，先释放已成功申请的结构体，再结束。
4. 记录元素个数为5；用循环填写并打印0到4。

四、释放与比较
1. 柔性数组版：想一想该释放哪个起始地址，需要调用几次free？
2. 指针成员版：先释放元素空间，再释放结构体，需要调用几次free？
3. 哪一种把结构体和数组放在同一块空间？为什么指针成员需要另申请空间？

预期能看到两组相同的数据：
柔性数组：0 1 2 3 4
指针成员：0 1 2 3 4

先自己写。每一步申请成功后再访问，全部用完后记得释放。
*/
#include <stdio.h>
#include<stdlib.h>
struct st_type1 
{
    int i;
    int a[];
};
struct st_type2
{
    int i;
    int *a;
};
void print(int *arr,int n,char*s);
int main ()

{
    struct st_type1* p1 = (struct st_type1*)malloc(sizeof(struct st_type1)+5*sizeof(int));
    if(p1 == NULL)
    {
    printf("开辟失败");
    return 1;
    }
    p1 -> i = 5;
    for(int i = 0;i<5;i++)
    {
        p1 -> a[i] = i;
    }
     print(p1->a,5,"柔性数组:");
    struct st_type2* p2 = (struct st_type2*)malloc(sizeof(struct st_type2));
    if(p2 == NULL)
    {
        printf("开辟失败\n");
        return 1;
    }
    p2->i = 5;
    p2->a = (int *)malloc(sizeof(int)*5);
    if(p2->a==NULL)
    {
        printf("扩存失败\n");
        free(p2);
        p2 = NULL;
        return 1;
    }
    for(int i = 0 ;i<p2->i;i++)
    p2->a[i] = i;
    print(p2->a,5,"指针成员");
    return 0;
}
void print (int *arr,int n,char*s)
{
    printf("%s",s);
    for(int i = 0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
}
