#include <stdio.h>
int main()
{
    char str[32];
    fgets(str,sizeof(str),stdin);
    int n = 0;
    for (n = 0;str[n] !='#';n++);
    for (int i = 0;i<n;i++)
    {
        if (str[i]>='a'&&str[i]<='z')
        str[i] -=32;
        else  if (str[i]>='A'&&str[i]<='Z')
        str[i] +=32;
    }
    for (int i = 0;i<n;i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}