int getindex(char *s)
{
    char week[7][10] = {
        "Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday",
        "Friday", "Saturday"
    };

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(s, week[i]) == 0)
        {
            return i;
        }
    }

    return -1;
}
