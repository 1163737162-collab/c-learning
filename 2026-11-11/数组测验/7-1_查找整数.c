#include <stdio.h>
int main ()
{
    int N , X;
    scanf ("%d %d",&N,&X);
    int arr[N];
    for (int i = 0;i<N;i++)
        scanf("%d",&arr[i]);
    int res = 0;
    for (int i = 0;i<N;i++)
        {
            if (arr[i]==X)
            {
                printf("%d",i);
        
            
            res = 1;
            break;}

        }
    if(res == 0)
        printf("Not Found");
    
    
    return 0;
}
