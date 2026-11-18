/*
realloc 扩容

题目：先申请 3 个 int，存入 10、20、30；扩容到总共 5 个 int，新增位置填入 40、50 并打印。每次申请要检查；realloc 失败时原空间仍需释放。

完成后的输出示例：
扩容后：10 20 30 40 50

请在下方 TODO 处自己完成。
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // TODO：申请 3 个 int 并检查，填入前三个值。
    // TODO：用 temp 接收 realloc 结果；成功后更新 p。
    // TODO：给新增的两个元素赋值、打印并释放。
    int *p = (int *)malloc(3 * sizeof(int));
    if (p == NULL)
    {
        printf("开辟失败");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        p[i] = 10 * (i + 1);
    }
    int *temp = realloc(p, 5 * sizeof(int));
    if (temp == NULL)
    {
        printf("扩容失败");
        free(p);
        return 1;
    }
    p = temp;
    temp = NULL;
    for(int i = 3;i<5;i++)
    {
        p[i] = (i+1)*10;
    }
    printf("扩容后:");
    for(int i = 0; i<5;i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
    p = NULL;

    return 0;
}
