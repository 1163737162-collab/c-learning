/*
第1题：malloc 与 free（讲义第2～3页）
目标：动态申请能存放4个int的空间，填入并输出10 20 30 40。
1. 定义指针，使用malloc申请4个int所需的字节数。
2. 判断申请是否成功，失败时给出提示并结束。
3. 用循环将10、20、30、40依次写入，再用循环输出。
4. 释放申请得到的起始地址，将指针设为NULL。
思考：malloc的参数单位是什么？为什么要先写入再读取？

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *p = (int *)malloc(sizeof(int)*4);
    if (p == NULL)
    {
        printf("开辟失败");
        return 1;
    }
    for (int i = 0;i<4;i++)
    {
        p[i] = (i+1)*10;
    }
    for (int i = 0;i<4;i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    p = NULL;
    return 0;
}