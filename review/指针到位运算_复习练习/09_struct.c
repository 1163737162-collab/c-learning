/*
结构体与结构体指针

题目：创建一名学生，通过结构体指针把分数增加 5，再编写 print_student 打印姓名和分数。

完成后的输出示例：
姓名：小明
分数：90

请在下方 TODO 处自己完成。
*/

#include <stdio.h>

struct Student
{
    char name[32];
    int score;
};

void print_student(const struct Student *p);

int main(void)
{
    struct Student stu = {"小明", 85};
    struct Student *p = &stu;
    // TODO：通过 p 修改分数，调用 print_student。
    (void)p;
    p->score = 90;
    print_student(p);

    return 0;
}

void print_student(const struct Student *p)
{
    // TODO：通过结构体指针打印姓名和分数。
    printf("姓名: %s\n",p->name);
    printf("分数: %d\n",p->score);
    (void)p;
}
