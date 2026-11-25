#include <stdio.h>
#include <stdlib.h>
int main()
{
    double *p = NULL;
    int N;
    scanf("%d",&N);
    p = (double*)malloc(N*sizeof(double));
    if(p==NULL)
    {
        printf("开辟失败");
        return 1;
    }
    for(int i = 0;i<N;i++)
        scanf("%lf",p+i);
    double max = *p;
    double min = *p;
    double average = (*p)/N;
    for(int i = 1;i<N;i++)
        {
            average += p[i]/N;
            if(max<p[i])
                max = p[i];
            if(min>p[i])
                min = p[i];
        }
    printf("average = %.2f\n",average);
    printf("max = %.2f\n",max);
    printf("min = %.2f\n",min);
    return 0;
}
