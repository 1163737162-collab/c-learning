#include <stdio.h>
int main ()
{
    char str[82];
    int count = 0;
    fgets(str,sizeof(str),stdin);
    for(int i = 0;str[i] != '\0';i++)
        {
            if (str[i]>='0'&&str[i]<='9')
                count++;
        }
    printf("%d\n",count);
    return 0;
}
