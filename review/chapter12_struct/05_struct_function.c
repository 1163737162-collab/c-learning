/*
定义学生结构体并编写函数输出信息。尝试按值传递，再传递结构体指针并修改成绩，比较效果。
*/
#include <stdio.h>
struct stu
{
    char name [10];
    int age;
    int score;
};
void change (struct stu*s);
int main(void)
{
    // TODO: 自己完成练习。
    struct stu s1 ;
    struct stu*sp = &s1;
    change(sp);
    
    


    return 0;
}
void change (struct stu*s){
    
    s->age = 34;
    s->score = 33;
}
