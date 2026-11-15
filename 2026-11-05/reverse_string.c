#include <stdio.h>
int main()
{
char str[82];
fgets(str, sizeof(str), stdin);
int n = 0;
while (str[n] != '\0' && str[n] != '\n')
{
    n++;
}
for (int i = 0; i <n/2;i++)
{
    char temp = str[i];
    str[i] = str[n - 1 - i];
    str[n - 1 - i] = temp;
}
for(int i = 0; i < n; i++)
{
    printf("%c", str[i]);
}
   return 0;
}