#include <stdio.h>
int main()
{
    int ra,ca,rb,cb;
    scanf("%d %d",&ra,&ca);
    int a[ra][ca];
    for(int i = 0;i < ra;i++)
    {
        for(int j = 0;j < ca;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&rb,&cb);
    int b[rb][cb];
    int c[ra][cb];
    for(int i = 0;i <rb ;i++)
    {
        for(int j = 0;j < cb;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(ca != rb)
    {
        printf("Error: %d != %d",ca,rb);
    }
    else
    {
        printf("%d %d\n",ra,cb);
        for(int i = 0;i < ra;i++)
        {
            for(int j = 0;j < cb;j++)
            {
                c[i][j] = 0;
                for(int k = 0;k < ca;k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i = 0;i < ra;i++)
        {
            for(int j = 0;j < cb;j++)
            {
                if ( j > 0)
                {
                    printf(" ");
                }
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}