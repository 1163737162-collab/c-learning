#include <stdio.h>
int main()
{
    int letter=0;int digit=0;int blank=0; int other=0;
    for (int i=1; ; i++)
    {
        char c;
        scanf("%c",&c);
        if (c  =='\n')
        break;
        if (c >='a'&& c <='z' || c >='A' && c <= 'Z')
        letter++;
        else if (c >='0' && c <= '9')
        digit++;
        else if (c == ' ')
        blank++;
        else 
        other++;
    }
    printf("%d %d %d %d",letter,digit,blank,other);
    
    return 0;
}