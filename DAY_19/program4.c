// --> Write a program to Find diagonal sum:--
// --> Also called as trace of matrix:--

#include <stdio.h>
int main()
{
    int n, sum1 = 0, sum2 = 0;
    printf("n-->");
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\nMATRIX:--\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if (i + j == (n - 1))
            {
                sum2 = sum2 + arr[i][j];
            }
            printf("[%d] ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\nPRIMARY DIAGONAL SUM-->%d", sum1);
    printf("\nSECONDARY DIAGONAL SUM-->%d\n", sum2);
    return 0;
}