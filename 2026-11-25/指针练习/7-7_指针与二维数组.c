/*
7-7 指针与二维数组

PTA 原题：https://pintia.cn/problem-sets/2125421768680599552/exam/problems/type/7?problemSetProblemId=2125421768701571078
作者：于延    单位：哈尔滨师范大学

题目要求：
分析下面代码，理解指针与二维数组。

题目给定代码（属于题干）：
#include<stdio.h>
int main(){
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    for(i=0;i<3;i++)
      for(j=0;j<4;j++)
        printf("%d.",*(*(a+i)+j));
    printf("\n");
    int(*p)[4];     //定义指向一行(4个int)变量的指针变量p
    p=a;
    for(i=0;i<3;i++){
      for(j=0;j<4;j++)
        printf("%d.",*(*(p+i)+j));
    }
    return 0;
}

输入样例：
无（原题输入样例为空）。

输出样例：
1.2.3.4.5.6.7.8.9.10.11.12.
1.2.3.4.5.6.7.8.9.10.11.12.

2026-11-26 已核对 PTA 原题。
*/

// TODO：在这里自行完成完整程序。
