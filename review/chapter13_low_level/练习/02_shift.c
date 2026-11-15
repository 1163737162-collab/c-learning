/* 左右移：用无符号数 10，分别左移一位、右移一位；打印结果和原数，观察原数是否改变。 */
#include <stdio.h>

int main(void)
{
    unsigned int value = 10, left = 0, right = 0;

    // TODO: 用无符号数 10，分别左移一位、右移一位；打印结果和原数，观察原数是否改变。
    // 在这里亲手写代码。
    printf("向左移一位: %d \n向右移一位: %d\n",value<<1,value>>1);
    printf("原数 = %d\n",value); 
    return 0;
}
