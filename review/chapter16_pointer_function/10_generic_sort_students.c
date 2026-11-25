/*
第 10 题　通用排序换一种数据测试（讲义第 15～17 页，加餐）

题目
1. 把第 9 题的 generic_sort 和它依赖的辅助函数复制进本文件。
2. 用同一个排序函数先排 int，再按分数从高到低排 Student。
   分数相同时按名字的字母顺序排。分别传入对应的比较函数。
3. 用相同数据调用标准库 qsort 核对结果。两次排序最好从相同的原数组开始。

预期输出
整数：1 2 3
学生：An(95) Bo(95) Lin(80)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[16];
    int score;
};

void bubble_sort(void *base, size_t count, size_t size,
                 int (*compare)(const void *, const void *));
void swap_bytes(void*p1,void*p2,size_t size);
int int_compare(const void* left,const void* right);
int student_compare(const void*left,const void* right);


int main(void)
{
    int numbers[] = {3, 1, 2};
    struct student students[] = {{"Lin", 80}, {"Bo", 95}, {"An", 95}};
    // TODO：引入第 9 题的实现和对应的比较函数，分别排序并核对。
    bubble_sort(numbers,sizeof(numbers)/sizeof(numbers[0]),sizeof(numbers[0]),int_compare);
    bubble_sort(students,sizeof(students)/sizeof(students[0]),sizeof(students[0]),student_compare);
    printf("整数:");
    for(int i = 0;i<3;i++)
    printf("%d ",numbers[i]);
    printf("\n");
    printf("学生:");
    for(int i = 0;i<3;i++)
    printf("%s(%d) ",students[i].name,students[i].score);
    return 0;
}
void bubble_sort(void *base, size_t count, size_t size, int(compare)(const void *, const void *))
{
    if(count<2)
    return;
    for (size_t i = 0; i < count - 1; i++)
    {
        for (size_t j = 0; j < count - i - 1;j++)
        {
    
            if(compare((char*)base+j*size,(char*)base+(j+1)*size)>0)
            swap_bytes((char*)base+j*size,(char*)base+(j+1)*size,size);
        }
    }
}
int int_compare(const void* left,const void* right)
{
    return *(int *)left - *(int *)right;
}
int student_compare(const void*left,const void* right)
{
    if(((struct student*)right)->score==((struct student*)left)->score)
    return strcmp(((struct student*)left)->name,((struct student*)right)->name);
    else return ((struct student*)right)->score-((struct student*)left)->score;

}
void swap_bytes(void*p1,void*p2,size_t size)
{
    for(size_t i = 0;i<size;i++)
    {
        char temp = *((char*)p1+i);
        *((char*)p1+i) = *((char*)p2+i);
        *((char*)p2+i) = temp;
    }
}