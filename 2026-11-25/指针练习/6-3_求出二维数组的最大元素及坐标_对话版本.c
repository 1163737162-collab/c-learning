int find(int array[N][M], int *Row, int *Col)
{
    int max = array[0][0];
    *Row = 0;
    *Col = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                *Row = i;
                *Col = j;
            }
        }
    }
    return max;
}
