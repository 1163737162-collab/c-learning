#include <stdio.h>

int main(void)
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        int *p = a[i];
        for (int j = 0; j < col; j++)
        {
            scanf("%d", p + j);
            sum += *(p + j);
        }
        printf("%d\n", sum);
    }

    return 0;
}
