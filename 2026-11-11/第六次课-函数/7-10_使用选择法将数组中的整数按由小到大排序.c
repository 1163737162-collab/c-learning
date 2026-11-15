#include <stdio.h>
void slect (int a[10],int r);
int main ()
{
    int a[10];
    for(int i = 0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }
    slect(a,10);
        for(int i = 0;i<10;i++)
            {
                printf("%5d",a[i]);
            }
    
    return 0;
}
void slect (int a[10],int n)
{
    for (int i = 0;i < n-1;i++)
        {
            int maxInex = i;
            for (int j = i+1;j<n;j++)
                {
                    if(a[maxInex]<a[j])
                        maxInex = j;
                }
            int temp = a[i];
            a[i] = a[maxInex];
                a[maxInex]=temp;
        }
}
