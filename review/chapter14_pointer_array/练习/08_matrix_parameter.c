/*
第8题：二维数组传参（讲义第14–16页）

1. 在 main 中定义3行5列的整型数组，分别放入：
   第一行 1 2 3 4 5；第二行 2 3 4 5 6；第三行 3 4 5 6 7。
2. 自己写函数，接收这个二维数组和行数，用两层循环逐行打印。
3. 再写一个函数，通过数组指针形参完成同样的打印，对比输出。
4. 写函数修改第2行第3列为99，在 main 中再次打印该元素验证。
5. 思考：二维数组名作为参数时指向什么？为什么函数需要知道列数？
   int ** 能直接接收这个二维数组吗？

请在下面从头编写代码。
*/
#include <stdio.h>
void print (int (*p)[5],int r, int c);
void change(int (*P)[5],int r,int c);

int main ()
{
   int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
   printf("修改前:\n");
   print(arr,3,5);
   change(arr,3,5);
   printf("修改后:\n");
   print(arr,3,5);
   return 0;
}
void print(int (*p)[5],int r,int c)
{

   for(int i = 0;i<r;i++)
   {
      for(int j = 0;j<c;j++)
      {
         printf("%-4d",*(*(p+i)+j));
      }
      printf("\n");
   }

}
void change (int (*p)[5],int r,int c)
{
   *(*(p+1)+2) = 99;
}
