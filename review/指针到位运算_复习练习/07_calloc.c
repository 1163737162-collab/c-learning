/*
calloc 与初始化

题目：用 calloc 申请 4 个 int，检查申请结果，先打印初始值；再把第三个元素改成 99 并打印，最后释放。

完成后的输出示例：
初始：0 0 0 0
修改后：0 0 99 0

请在下方 TODO 处自己完成。
*/

#include <stdio.h>
#include <stdlib.h>

void print(int *p,int r,const char* label);
int main(void)
{
    // TODO：用 calloc 申请 4 个 int 并检查。
    // TODO：按题目打印、修改和释放。
    int *p = (int *)calloc(5,sizeof(int));
    if(p ==NULL)
    {
        printf("开辟失败");
        return 1;
    }
    print(p,4,"初始");
    p[2] = 99;
    print(p,4,"修改后");
    free(p);
    p = NULL;
    (void)p;

    return 0;
}
void print(int *p,int r,const char* label)
{
    printf("%s; ",label);
    for(int i = 0;i<r;i++)
    printf("%d ",p[i]);
    printf("\n");
}
