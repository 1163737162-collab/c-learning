#include <stdio.h>
#include <math.h>
int main()
{
    int N, gei, shi, bai;
    scanf("%d",&N);
    gei = pow ((N%100)%10 , 3);
    shi = pow((N/10) % 10,3);
    bai = pow (N/100,3);
    if (N < 100)
    {
        printf("Invalid Value");
    }
    else if (gei +shi +bai == N)
    {
        printf("Yes");
    }
    else if (gei + shi + bai != N)
    {
       printf("No");
    } 
    
    return 0;
}