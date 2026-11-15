/*
定义 char、int、double 变量及分别指向它们的指针。输出并比较各变量和各指针的 sizeof。
*/
#include <stdio.h>
int main(void)
{
    // TODO: 自己完成练习。
    printf("%zu\n",sizeof(char*));
    printf("%zu\n",sizeof(int*));
    printf("%zu\n",sizeof(double*));
    

    return 0;
}
