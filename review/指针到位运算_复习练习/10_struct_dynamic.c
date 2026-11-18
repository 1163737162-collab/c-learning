/*
结构体指针成员与动态内存

题目：结构体中有 count 和 int *scores。让 count 为 3，给 scores 单独申请 3 个 int，填入 80、90、100。编写打印函数，按 count 打印；最后释放 scores。

完成后的输出示例：
成绩：80 90 100

请在下方 TODO 处自己完成。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Class
{
    int count;
    int *scores;
};

void print_scores(const struct Class *p);

int main(void)
{
    struct Class cls = {0, NULL};
    // TODO：设置 count，给 scores 申请空间并检查。
    cls.count = 3;
    cls.scores = malloc(cls.count*sizeof(int));
    if(cls.scores == NULL)
    {
        printf("开辟失败\n");
        return 1;
    }
    // TODO：填入成绩、调用打印函数、释放申请的空间。
    int values[3] = {80,90,100};
    memcpy(cls.scores,values,3*sizeof(int));
    struct Class *p = &cls;
    print_scores(p);
    free(cls.scores);
    cls.scores = NULL;
    return 0;
}

void print_scores(const struct Class *p)
{
    // TODO：通过 p 和 p->count 打印成绩。
    printf("成绩:");
    for(int i = 0;i<p->count;i++)
    {
        printf("%d ",p->scores[i]);
    }
}
