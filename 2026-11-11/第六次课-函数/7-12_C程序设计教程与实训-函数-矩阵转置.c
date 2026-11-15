#include <stdio.h>
void change (int a[4][4],int r,int c);
int main ()
{
    int a[4][4];
    for (int i=0;i<4;i++)
        {
            for (int j = 0;j<4;j++)
                {
                    scanf("%d",&a[i][j]);
                }
        }
    change (a,4,4);
    for(int i = 0;i<4;i++)
        {
            for (int j = 0;j<4;j++)
                {
                    printf("%8d",a[i][j]);
                }
            printf("\n");
        }
    return 0;
}
void change (int a[4][4],int r,int c)
{
    for (int i = 0;i<4;i++)
        {
        for (int j = i+1;j<4;j++)
             {
                int temp = a[i][j];
                 a[i][j]=a[j][i];
                a[j][i]=temp;
             }
        }
}
