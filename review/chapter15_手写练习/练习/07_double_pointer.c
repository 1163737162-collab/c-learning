/*
第7题：笔试题3——二级指针修改调用者的指针（讲义第11页）
先分析原题核心代码：
    void GetMemory(char **p, int num) { *p = malloc(num); }
    char *str = NULL;
    GetMemory(&str, 100);
    strcpy(str, "hello");
    printf(str);
1. 画出str、&str、p、*p之间的关系，解释为什么这次str能改变。
2. 检查原题有没有检查分配失败、包含字符串头文件和释放内存。
3. 亲手写安全版本：用二级指针申请空间；main检查成功后复制hello、
   使用固定格式串打印，最后释放空间并置空。
预期安全版本输出：hello。

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void GetMemory(char**p,int num)
{
    *p = (char*)malloc(num);
}

void Test(void)
{
    char *str = NULL;
    GetMemory(&str,100);
    if (str == NULL)
    return;
    strcpy(str,"hello");
    printf("%s",str);
    free(str);
    str = NULL;
}
int main ()
{   Test();
    return 0;
}
