/*
第 4 题　用转移表写四则计算器（讲义第 7～10 页）

题目
1. 写加、减、乘、除四个函数。用函数指针数组把选项 1～4 映射到它们。
2. 每次先读一个选项。0 代表退出；选项合法时再读两个整数，输出结果。
3. 无效选项输出“无效选项”，然后继续读下一个选项。
4. 除数为 0 时输出“除数不能为 0”。读入结束或读入失败时退出。
   本题测试的操作数在 -1000～1000 之间，除法使用整数除法。

输入示例
1 7 3
4 7 2
4 7 0
9
0

输出示例
10
3
除数不能为 0
无效选项
*/

#include <stdio.h>

typedef int (*Operation)(int, int);

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

int main(void)
{
    // TODO：建立转移表，在读到合法选项后再下标访问并调用。
    int x,y;
    int input = 1;
    int res  = 0;
    int (*p[5])(int,int) = {0,add,sub,mul,divide};
    do
    {
        printf("************************\n");
        printf("****1.add******2.sub****\n");
        printf("****3.mul******4.div****\n");
        printf("****0.exit**************\n");
        printf("************************\n");
        printf("************************\n");
        printf("请选择: ");
        scanf("%d",&input);
        if(input<=4&&input>=1)
        {
            printf("输入操作数:");
            scanf("%d %d",&x,&y);
            res = (p[input](x,y));
            printf("res = %d\n",res);

        }
        else if(input)
        {
            printf("退出计算机\n");
            break;
        }
        else
        {
            printf("输入有错\n");
        }
    } while (input);
    
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divide (int a,int b)
{
    return a/b;
}
