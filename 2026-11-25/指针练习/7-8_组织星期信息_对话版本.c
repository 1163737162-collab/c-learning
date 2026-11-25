#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *week[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    int repeat;
    scanf("%d", &repeat);

    for (int k = 0; k < repeat; k++)
    {
        char word[100];
        scanf("%99s", word);
        int position = -1;
        for (int i = 0; i < 7; i++)
        {
            if (strcmp(word, week[i]) == 0)
            {
                position = i + 1;
                break;
            }
        }
        printf("%d\n", position);
    }
    return 0;
}
