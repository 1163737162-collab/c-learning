#include <stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    float a[num];
    for(int i = 0;i<num;i++)
        scanf("%f",&a[i]);
    for(int i = 0;i<num-1;i++)
        {
            for(int j = 0;j<num-i-1;j++)
                {
                    if(a[j]<a[j+1])
                    {
                        float temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
        }
    for(int i = 0;i<num;i++)
        {
            if(i>0)
                printf(" ");
                printf("%.2f",a[i]);
        }
    return 0;
}
