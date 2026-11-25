/*
第 8 题　逐字节交换两个元素（讲义第 15～16 页）

题目
1. 实现 swap_bytes，接收两个对象的起始地址和每个对象的字节数。
2. 在函数里按字节交换整块数据。提示：可用 unsigned char * 访问字节。
3. 先测试两个 int，再测试两个 char。每次传正确的字节数。
   假设两块空间都有效、可写，且互不重叠。

预期输出
交换整数后：9 4
交换字符后：B A
*/

#include <stdio.h>

void swap_bytes(void *left, void *right, size_t width);
typedef int* p;
typedef char* pp;
int main(void)
{
    int a = 4, b = 9;
    char x = 'A', y = 'B';
    // TODO：各调用一次 swap_bytes，再分别打印两组结果。
    p pa = &a,pb = &b;
    pp px = &x,py = &y;
    swap_bytes(pa,pb,sizeof(int));
    swap_bytes(px,py,sizeof(char));
    printf("交换整数后: %d %d\n",a,b);
    printf("交换字符后: %c %c\n",x,y);
    return 0;
}

void swap_bytes(void *left, void *right, size_t width)
{
    // TODO：转换成字节指针，逐字节交换。
    for(size_t i = 0;i < width;i++)
    {
        char temp = *((char*)left+i);
        *((char*)left+i) =*((char*)right+i);
        *((char*)right+i) = temp;
    }
}
