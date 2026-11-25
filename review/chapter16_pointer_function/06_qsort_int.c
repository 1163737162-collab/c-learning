/*
第 6 题　用 qsort 排整型数组（讲义第 12～14 页）

题目
1. 用数组 {-3, 8, 0, -3, 5} 测试 qsort。
2. 写一个升序比较函数和一个降序比较函数，分别排序并打印。
3. 通过 void 指针形参取得两个待比较的 int。
   比较函数返回负数、0、正数，分别表示前者应排在后者之前、两者同序、前者应排在后者之后。

预期输出
升序：-3 -3 0 5 8
降序：8 5 0 -3 -3

额外自测：加入 INT_MIN 和 INT_MAX。避免直接用两个数相减作为返回值。
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare_ascending(const void *left, const void *right);
int compare_descending(const void *left, const void *right);
void print(int *p,char*pp,size_t sz);

int main(void)
{
    int values[] = {INT_MAX,INT_MIN};
    // TODO：实现两个比较函数，分别调用 qsort 并打印。
    size_t num = sizeof(values)/sizeof(values[0]);
    size_t size =sizeof(values[0]);
    qsort(values,num,size,compare_ascending);
    print(values,"升序",num);
    // qsort(values,num,size,compare_descending);
    // print(values,"降序",num);
    return 0;
}
int compare_ascending(const void*left,const void *right)
{
    if(*(int *)left > *(int *)right)
    return 1;
    else if(*(int *)left < *(int *)right)
    return -1;
    else
    return 0;
}
int compare_descending(const void*left,const void *right)
{
    return (*(int *)right - *(int *)left);
}
void print(int *p,char *pp,size_t sz)
{
    printf("%s:",pp);
    for(int i = 0;i<sz;i++)
    printf("%d ",p[i]);
    printf("\n");
}