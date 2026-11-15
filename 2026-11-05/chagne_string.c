#include <stdio.h>
int main()
{
    char str[82];
    int n;
    fgets(str,sizeof(str),stdin);
    for( n= 0;str[n] != '\n' &&str[n] != '\0';n++);
    for(int i = 0; i < n;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = 'A' + 'Z' - str[i];
    }
    for(int i = 0; i < n;i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}