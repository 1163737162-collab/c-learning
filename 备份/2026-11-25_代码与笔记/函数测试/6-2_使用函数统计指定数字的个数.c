int CountDigit(int number, int digit)
{
    int count = 0;
    do
    {
        int d = number % 10;
        if (d < 0) d = -d;
        if (d == digit) count++;
        number /= 10;
    } while (number != 0);
    return count;
}
