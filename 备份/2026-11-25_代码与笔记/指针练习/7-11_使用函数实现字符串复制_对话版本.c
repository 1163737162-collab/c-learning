#include <stdio.h>
#include <string.h>
void strmcpy(char*s,char*t,int m);
int main()
{
    int repeat;
    scanf("%d",&repeat);
    getchar();
    for(int i = 0;i<repeat;i++)
        {
            char t [1000];
            char s [1000];
            fgets(t,sizeof(t),stdin);
            t[strcspn(t, "\n")] = '\0';
            int m;scanf("%d",&m);
            getchar();
            if(m>strlen(t))
                printf("error input\n");
            else
            {
            strmcpy(s,t,m);
            printf("%s\n",s);
            }
        }
    return 0;
}
void strmcpy(char*s,char*t,int m)
{
    t = t+m-1;
    while(*s++=*t++)
        {
            ;
        }
}
