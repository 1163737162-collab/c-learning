/*
第 7 题　结构体和字符串的内存归谁（讲义第 8～9 页）

题目
1. person_create 为 Person 申请空间，再另申请一份姓名字符串的空间。
2. name 为 NULL 时返回 NULL；任一步申请失败，都清理已成功申请的空间。
3. 创建成功后，把传入的姓名复制进去（包括末尾的 '\0'），由调用者负责销毁。
4. 实现 person_destroy，处理 NULL，正常时先释放姓名，再释放结构体。
5. main 用可修改的数组 "Alice" 创建对象。把原数组的首字母改掉，
   再打印对象姓名，验证它有自己的一份副本。最后调用 person_destroy 并置空。

预期输出
对象姓名：Alice
年龄：30
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char *name;
    int age;
};

struct Person *person_create(const char *name, int age);
void person_destroy(struct Person *person);

int main(void)
{
    char name[] = "Alice";

    // TODO：创建并检查；改原数组，打印对象，再销毁对象。
    (void)name;
    return 0;
}

struct Person *person_create(const char *name, int age)
{
    // TODO：两次分配、检查和复制。成功后把所有权交给调用者。
    (void)name;
    (void)age;
    return NULL;
}

void person_destroy(struct Person *person)
{
    // TODO：释放动态字符串和结构体。
    (void)person;
}
