#include <stdio.h>
#include <string.h>
int main ()
{
    char str[5][100];
    for(int i = 0;i<5;i++)
    scanf("%s",str[i]);
    char*max = str[0];
    for(int i = 0;i<5;i++)
        {
            if(strcmp(str[i],max)>0)
                max = str[i];
        }
    printf("Max is: %s\n",max);
        return 0;
}
