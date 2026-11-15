#include <stdio.h>
int isPrime(int n);
int main ()
{
    int N;
    scanf("%d",&N);
    for (int i = 0;i<N;i++)
        {
            int aim = 0;
        scanf("%d",&aim);
            if(isPrime(aim))
            printf("Yes\n");
            else
            printf("No\n");
            }
    
    return 0;
}
int isPrime(int n)
{
    if (n<=1)
        return 0;
    else 
        for (int i = 2;i<=n/i;i++)
            {
                if(n%i==0)
                    return 0;
            }
    return 1;
}
