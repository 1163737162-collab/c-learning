#include <stdio.h>
int main(void) {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;
    printf("修改前=%d\n",(*p)[2]);
    (*p)[2]=99;
    printf("修改后=%d\n",arr[2]);
    /* p是指向10个int组成的数组的指针；int *q[10]是存放10个int指针的数组。 */
    return 0;
}
