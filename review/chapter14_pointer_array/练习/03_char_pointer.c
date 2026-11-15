/*
第14章：字符指针（6–8页）

题目：通过字符指针修改字符。定义两个内容相同的字符数组及两个指向相同内容字面量的指针，比较地址和内容，再修改一个字符数组并观察。

请在下面从头编写代码。
*/

#include <stdio.h>
int main ()
{
    char ch = 'w';
    char *pc = &ch;
    printf("原来：%c\n",ch);
    *pc = 'W';
    printf("现在：%c\n",ch);
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    const char *str3 = "hello bit.";
    const char *str4 = "hello bit.";
    if (str1 == str2)
    printf("str1 and str2 are same\n");
    else 
    printf("str1 and str2 are not same\n");
    if(str3 == str4)
    printf("str3 and str4 are same\n");
    else 
    printf("str3 and str4 are not same\n");
    return 0;
}/*
第14章第3题：字符指针（讲义第6–8页）

请自己写程序，分三步完成：

1. 修改字符
   定义字符变量，初始值为小写 w，再定义指向它的字符指针。
   通过指针把字符改为大写 W，打印修改前后的字符。

2. 比较两个字符数组
   定义两个字符数组，内容都为 "hello bit."。
   比较首元素地址是否相同，再比较字符串内容是否相同。
   把第一个数组的首字母改成大写，打印两个数组，再比较内容。

3. 比较指向字符串字面量的指针
   定义两个 const char * 指针，都指向内容为 "hello bit." 的字符串字面量。
   比较两个指针保存的地址，再比较它们指向的字符串内容。
   想一想：相同字面量的地址是否一定相同？

提示：比较字符串内容可以使用 strcmp，需要包含 <string.h>。
字符数组可以修改，但不要修改字符串字面量。

请在下面已有的代码中继续填写。
*/