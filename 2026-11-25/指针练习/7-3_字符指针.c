/*
7-3 字符指针

PTA 原题：https://pintia.cn/problem-sets/2125421768680599552/exam/problems/type/7?problemSetProblemId=2125421768701571074
作者：于延    单位：哈尔滨师范大学

题目要求：
分析下面代码，理解字符指针的应用。

题目给定代码（属于题干）：
#include<stdio.h>
int main(){
    char *p;
    p="ABCDE";
    for( ;*p!='\0';p++)  printf("%s\n",p);
    return 0;
}

输入样例：
无（原题输入样例为空）。

输出样例：
ABCDE
BCDE
CDE
DE
E

2026-11-26 已核对 PTA 原题。
*/

// TODO：在这里自行完成完整程序。
