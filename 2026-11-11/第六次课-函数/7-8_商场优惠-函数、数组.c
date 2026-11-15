#include <stdio.h>

float amount(float list[], int n, float min);

int main(void)
{
    int n;
    float min;
    scanf("%d %f", &n, &min);

    float list[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &list[i]);
    }

    printf("%.2f\n", amount(list, n, min));
    return 0;
}

float amount(float list[], int n, float min)
{
    float sum = 0;
    float lowest = list[0];

    for (int i = 0; i < n; i++) 
    {
            sum +=list[i];
            if (list[i]<lowest)
                lowest = list[i];
    }
    if (n>=5&&sum>=min)
        sum -= lowest;

    return sum;
}
