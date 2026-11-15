#include <stdio.h>

double fact(int n);

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("result = %.0f\n", fact(n) / (fact(m) * fact(n - m)));
    return 0;
}

double fact(int n)
{
    double sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}
