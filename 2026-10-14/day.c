#include <stdio.h>
int main()
{
    int day;
    scanf("%d", &day);
    int rst = day +2;
    if (rst >7)
    {
        rst -= 7;
    }
    printf("%d\n", rst);
    return 0;
}