#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[3][100];
    char *p[3] = {a[0], a[1], a[2]};

    for (int i = 0; i < 3; i++)
    {
        if (fgets(a[i], sizeof a[i], stdin) == NULL)
            return 0;
        a[i][strcspn(a[i], "\r\n")] = '\0';
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                char *temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
        puts(p[i]);

    return 0;
}
