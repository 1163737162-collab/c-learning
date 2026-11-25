/*
第 4 题　外部用 if 检查，内部用 assert 验证（讲义第 3～4 页）

题目
1. 实现 array_average。数组为空指针或长度小于等于 0 时，返回 0.0。
2. 合法时，调用内部函数 array_sum 算和，再求平均值。
3. 在 array_sum 里用 assert 检查数组非空、长度大于 0。
4. 分别用普通编译和加参数 -DNDEBUG 编译。两种情况下，自测结果都应该相同。

预期输出
{2, 4, 6} 的平均值：4.0
长度为 0：0.0
空指针：0.0

提示：调用内部函数前先用 if 检查；assert 的表达式里不要写赋值或自增。
*/

#include <assert.h>
#include <stdio.h>

static double array_sum(const double *values, int length);
double array_average(const double *values, int length);

int main(void)
{
    double values[] = {2.0, 4.0, 6.0};

    // TODO：测试正常数组、零长度和 NULL。
    int length = (int)sizeof(values)/sizeof(values[0]);
    printf("平均值: %f\n",array_average(values,length));
    printf("平均值: %f\n",array_average(values,0));
    printf("平均值: %f\n",array_average(NULL,length));
    return 0;
}

static double array_sum(const double *values, int length)
{
    // TODO：写两个断言，再计算数组和。
    assert(values != NULL);
    assert(length>0);
    double sum = 0.0;
    for(int i = 0;i<length;i++)
    {
        sum += values[i];
    }
    return sum;
}

double array_average(const double *values, int length)
{
    // TODO：调用 array_sum 前先验证参数。
    if(NULL==values||length<1)
    return 0.0;
    return array_sum(values,length)/length;
}
