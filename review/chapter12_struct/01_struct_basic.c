/*
定义包含姓名、年龄、成绩的学生结构体。创建变量并给成员赋值，用点操作符输出。
*/
#include <stdio.h>
struct stu
{
    char name[20];
    int age;
    int score;
}s1,s2,s3;
int main(void)
{
    // TODO: 自己完成练习
    struct stu s1 = {"张三",18,100};
    struct stu s2 = {"王五",17,90};
    printf("%s %d %d",s1.name,s1.age,s1.score);
    printf("%s %d %d",s1.name,s2.age,s2.score);



    return 0;
}
