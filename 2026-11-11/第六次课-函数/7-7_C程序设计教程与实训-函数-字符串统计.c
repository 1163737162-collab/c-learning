#include <stdio.h>

void countChars(char a[], int res[]);

int main(void)
{
    char a[102];
    int res[4] = {0};

    if (fgets(a, sizeof(a), stdin) == NULL)
        return 0;

    countChars(a, res);

    for (int i = 0; i < 4; i++) {
        printf("%8d", res[i]);
    }
    printf("\n");
    return 0;
}

void countChars(char a[], int res[])
{
    for (int i = 0; a[i] != '\0' && a[i] != '\n'; i++) {
        if ((a[i] >= 'A' && a[i] <= 'Z') ||
            (a[i] >= 'a' && a[i] <= 'z'))
            res[0]++;
        else if (a[i] >= '0' && a[i] <= '9')
            res[1]++;
        else if (a[i] == ' ')
            res[2]++;
        else
            res[3]++;
    }
}
