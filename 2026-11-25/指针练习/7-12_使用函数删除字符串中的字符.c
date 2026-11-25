#include <stdio.h>
#include <string.h>
void delchar(char *str,char c);
int main()
{
    int repeat;scanf("%d",&repeat);
    getchar();
    for(int i =0;i<repeat;i++)
        {
            char str[1000];
            fgets(str,sizeof(str),stdin);
            str[strcspn(str, "\n")] = '\0';
            char c;scanf("%c",&c);
            delchar(str,c);
            printf("result: %s\n",str);
        }
    return 0;
}
void delchar(char*str,char c)
{
    int i = 0;
    int j = 0;
    while(*(str+i))
        {
            if(str[i]!=c)
            {
                str[j] = str[i];
                    j++;
            }
            i++;
        }
    str[j] = '\0';
}
