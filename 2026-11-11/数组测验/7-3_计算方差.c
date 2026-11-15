#include <stdio.h>
int main ()
{
    int n;
    int arr[100];
    double sum = 0,res = 0;
    scanf("%d",&n);
    for(int i = 0; i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
    sum = sum/n;
    for (int i = 0;i<n;i++)
        {
            res += (arr[i]-sum)*(arr[i]-sum);
            
        }
    res = res/n;
    printf("%.2f",res);
    return 0;
}
