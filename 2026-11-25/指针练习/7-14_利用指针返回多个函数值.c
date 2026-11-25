#include <stdio.h>
void max_min(int*a,int*max,int*min,int num);
int main()
{
    int num;scanf("%d",&num);
    int a[num];
    for(int i = 0;i<num;i++)
        scanf("%d",&a[i]);
     int max = a[0];
     int min = a[0];
    max_min(a,&max,&min,num);
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    return 0;
}
void max_min(int*a,int*max,int*min,int num)
{
    for(int i = 1;i<num;i++)
        {
            if(*max<a[i])
                *max = a[i];
            if(*min>a[i])
                *min = a[i];
        }
}
