/*
第9题：柔性数组（讲义第12～14页）
1. 定义结构体，包含元素个数成员和位于最后的柔性数组成员int a[]。
2. 一次申请结构体与5个int所需的总空间，并检查申请结果。
3. 填入并打印0 1 2 3 4；用%zu打印结构体自身的sizeof。
4. 用临时指针将整块空间扩到8个元素，检查失败并正确清理。
5. 为新增位置填入5 6 7，打印全部8个数，最后释放。
思考：sizeof结构体包含尾部这8个元素吗？为什么不能单独free(p->a)？
讲义中的int a[0]是编译器扩展，练习使用标准写法int a[]。

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h>
struct st_type
{
    int i;
    int a[0];
};
void print(struct st_type *p);

int main ()
{
    printf("%zu\n",sizeof(struct st_type));
    struct st_type *p = (struct st_type *)malloc(sizeof(struct st_type)+5*sizeof(int));
    if(p == NULL)
    {
        printf("mollc失败\n");
        return 1;
    }
    p -> i = 5;
    for(int i = 0;i<5;i++)
    p -> a[i] = i;
    print(p);
    struct st_type*temp = realloc(p,sizeof(struct st_type)+ 8*sizeof(int));
    if(temp != NULL)
    p = temp;
    else
    {
        printf("扩容失败");
        free(p);
        return 1;
    }
    p ->i = 8;
    for (int i = 5;i<8;i++)
    p -> a[i] = i;
    print(p);
    free(p);
    p = NULL;

    return 0;
}
void print(struct st_type *p)
{
    printf("元素个数: %d\n",p->i);
    for (int j = 0;j<p->i;j++)
    printf("%d ",p->a[j]);
    printf("\n");
}