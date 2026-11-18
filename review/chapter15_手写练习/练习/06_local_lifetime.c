/*
第6题：笔试题2——局部数组的生命周期（讲义第10页）
先分析原题核心代码，不要运行错误版本：
    char *GetMemory(void) {
        char p[] = "hello world";
        return p;
    }
1. 画出函数调用前后数组p的生命周期，解释返回的地址能否继续使用。
2. 想想返回静态存储期的字符串和返回动态分配的副本有什么区别。
3. 亲手实现一种方案：函数申请空间并复制字符串，返回指针；
   main检查返回值、打印，最后负责释放。
预期安全版本输出：hello world。

代码请自己写。
*/
#include <stdio.h>
#include <stdlib.h> 
 
char *GetMemory(void) 
{ 
    char p[] = "hello world"; 
    return p; 
} 
 
void Test(void) 
{ 
    char *str = NULL; 
    str = GetMemory(); 
    printf(str); 
} 
 
int main() 
{ 
    Test(); 
    return 0;
}
