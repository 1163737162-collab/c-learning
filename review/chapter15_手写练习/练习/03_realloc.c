/*
第3题：realloc扩容与缩容（讲义第4～7页）
1. 申请3个int，检查后写入10、20、30并打印。
2. 用realloc把空间扩大到6个int；用临时指针接收返回值。
3. 扩容失败时释放原空间并结束；成功时更新原指针。
4. 只给新增的3个元素写入40、50、60，打印所有6个元素。
5. 再用临时指针缩到2个int；成功后只访问前2个元素。
6. 释放最后有效的起始地址。所有请求的大小均为正数。
思考：为什么不直接用p接收realloc结果？扩容后新空间能直接读吗？

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h>
void print(int *p,int r);
int main ()
{   
    int count = 3;
    int *p = (int *)malloc(count*sizeof(int));
    if(p == NULL)
    {
        printf("开辟失败");
        return 1;
    }
    for(int i = 0;i<count;i++)
    {
        p[i] = (i+1)*10;
    }
    print(p,count);
    count += 3;
    int *ptr = (int *)realloc(p,count*sizeof(int));
    if(ptr == NULL)
    {
        printf("扩容失败");
        free(p);
        return 1;
    }
    for(int i = 3;i<count;i++)
    {
        ptr[i] = (i+1)*10;
    }
    print(ptr,count);
    count = 2;
    
    int *temp = (int *)realloc(ptr,count*sizeof(int));
    if(temp == NULL)
    {
        printf("缩容失败");
        return 1;
    }
    print(temp,count);
    free(temp);
    temp = NULL;
    return 0;
}
void print(int *p,int r)
{
    for(int i = 0;i<r;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
