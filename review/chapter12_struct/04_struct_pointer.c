/*
定义并初始化结构体变量，用指针指向它。分别使用 (*p).成员 和 p->成员 访问，并通过指针修改成员。
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
    struct stu s1 = {"abc",19,90};
    struct stu*sp = &s1;
    printf("%s %d %d",(*sp).name,sp->age,sp->score);

    return 0;
}
