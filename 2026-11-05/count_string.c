#include <stdio.h>
int main ()
{
    char str[81];
    int n = 0;
    fgets(str,sizeof(str),stdin);
    for(n = 0;str[n]!= '\n';n++);
    char flag;
    scanf("%c",&flag);
    int count = 0;
    for (int i = 0;i<n;i++)
    {
        if (str[i] == flag)
        count++;
    }
    printf("%d",count);
    return 0;

}