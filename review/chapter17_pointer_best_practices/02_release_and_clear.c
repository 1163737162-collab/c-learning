/*
第 2 题　释放内存后置空（讲义第 1～2 页）

题目
1. 用 malloc 申请 3 个 int，检查后依次写入 10、20、30。
2. 让 alias 借用这块内存，用它打印第二个数。
3. 用完后先把 alias 设为 NULL，再 free(owner)，最后把 owner 也设为 NULL。
4. 检查两个指针都已置空。写一句注释解释为什么只给 owner 置空还不够。

预期输出
第二个数：20
两个指针已置空
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *owner = NULL;
    int *alias = NULL;
    owner = (int *)malloc(3*sizeof(int));
    if(NULL==owner)
    {
        printf("开辟失败\n");
        return 1;
    }
    for(int i = 0;i<3;i++)
    {
        owner[i] = 10*(i+1);
    }
    alias = owner;
    if(NULL==alias)
    {
        printf("借用失败\n");
        return 1;
    }
    printf("%d\n",alias[1]);
    alias = NULL;
    free(owner);
    owner = NULL;
    if(alias==NULL&&owner==NULL)
    printf("两个指针已置空\n");
    // TODO：分配、填写、借用、释放。申请失败时提前返回。
    (void)owner;
    (void)alias;
    return 0;
}
