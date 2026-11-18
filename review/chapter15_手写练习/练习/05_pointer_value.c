/*
第5题：笔试题1——指针按值传参（讲义第9～10页）
先分析讲义原题的核心代码，不要执行错误代码：
    void GetMemory(char *p) { p = malloc(100); }
    char *str = NULL;
    GetMemory(str);
    strcpy(str, "hello world");
    printf(str);
1. 画出调用前后str和形参p各自的值；解释str会不会被改变。
2. 找出分配失败、内存泄漏、字符串复制和输出中的问题。
3. 自己改写：让函数返回分配的指针；调用者检查、复制、打印并释放。
预期安全版本输出：hello world。
注意：需包含<string.h>，用固定格式串输出字符串。

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void GetMemory(char **p) 
{
    *p = (char *)malloc(100); 
} 
 
void Test(void) 
{ 
    char *str = NULL; 
    char **p = &str;
    GetMemory(p); 
    if (str == NULL)
    {
        printf("失败");
        return;
    }
    strcpy(str, "hello world"); 
    printf("%s",str); 
    free(str);
    str = NULL;
} 
 
int main() 
{ 
    Test(); 
    return 0; 
} 