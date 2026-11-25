#include <stdio.h>
int search (int *list,int n,int x);
int main ()
{
    int repeat;
    scanf("%d",&repeat);
    for(int i =0;i<repeat;i++)
        {int n;
    scanf("%d",&n);
    int a[3];
    for(int i = 0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    int x;
    scanf("%d",&x);
    int result;
    result = search(a,n,x);
    if(result == -1)
        printf("Not found");
    else
        printf("index = %d\n",result);}
    return 0;
}
int search(int *list,int n,int x)
{
    int result = -1;
    for(int i = 0;i<n;i++)
        {
            if(x==list[i])
                result = i;
        }
    return result;
}
