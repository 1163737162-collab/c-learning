/*
创建并初始化一个结构体变量，复制给同类型的另一个变量。修改副本的成员，分别输出并观察。
*/
#include <stdio.h>
struct stu
{
    char name [10];
    int age;
    int score;
};
int main(void)
{
    // TODO: 自己完成练习。
    struct stu s1 = {"张三",18,90};
    struct stu s2 = {"王五",13};
    printf("%s %d %d\n",s1.name,s1.age,s1.score);
    printf("%s %d %d\n",s2.name,s2.age,s2.score);
    return 0;
}
