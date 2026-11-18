/*
二级指针

题目：数组 {10, 20, 30, 40}，让 p 指向首元素；实现 move_next，通过二级指针让 p 向后移动一个元素，分别打印移动前后的值。

完成后的输出示例：
移动前：10
移动后：20

请在下方 TODO 处自己完成。
*/

#include <stdio.h>

void move_next(int **pp);

int main(void)
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    // TODO：打印 *p，调用 move_next，再打印 *p。
    (void)p;
    printf("移动前: %d\n",*p);
    int **ptr = &p;
    move_next(ptr);
    printf("移动后; %d\n",*p);
    return 0;
}

void move_next(int **pp)
{
    // TODO：通过 pp 修改调用者的指针。
    (void)pp;
    *pp +=1;
}
