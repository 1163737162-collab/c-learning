#include <stdio.h>
int main ()
{
    int n,m;
    scanf("%d %d",&m,&n);
    FILE *fp = fopen("out.txt","w");
    if (fp == NULL)
    return 1;
    for (int x = m;x<=n;x++)
    {
        int ge = x%10;
        int shi = x/10%10;
        int bai = x/100;
        if(ge*ge*ge+shi*shi*shi+bai*bai*bai == x)
        fprintf(fp,"%d",x);
    }
    fclose(fp);
    return 0;
} 