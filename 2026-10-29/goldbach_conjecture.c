#include <stdio.h>
int isPrime(int X);
int main()
{
    int N;
    scanf("%d", &N);
    if (N == 4)
    {
        printf("4 = 2 + 2\n");
        return 0;
    }
    for (int x = 3; x <= N/2; x += 2)
    {
         int y = N - x;
        if (isPrime(x)&&isPrime(y))
        {
            printf("%d = %d + %d\n",N,x,y);
            break;
        }
    }
    return 0;
}
int isPrime(int x)
{
    int flag = 1;
    for (int i =3; i <= x / i; i += 2)
    {

        if (x % i == 0)
        return 0;
    }
    return 1;
}