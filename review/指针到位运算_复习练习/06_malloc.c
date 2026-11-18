/*
malloc 申请与释放

题目：用 malloc 申请 5 个 int，检查申请结果。成功后填入 10、20、30、40、50 并打印，最后释放。不要读取没有赋值的空间。

完成后的输出示例：
10 20 30 40 50

请在下方 TODO 处自己完成。
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int *p = NULL;
    // TODO：申请 5 个 int 并检查；成功后赋值、打印、释放。
    (void)p;
    p = (int *)malloc(sizeof(int)*4);
    if(p == NULL)
    {
        printf("开辟malloc失败");
        return 1;
    }
    for(int i = 0;i<5;i++)
    {
        p[i] = 10*(i+1);
        printf("%d ",p[i]);
    }
    free(p);
    p = NULL;
    return 0;
}
