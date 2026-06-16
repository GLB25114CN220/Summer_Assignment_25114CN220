// --> Write a program to Check symmetric matrix:--

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square matrix (n * n): ");
    scanf("%d", &n);

    int mat[n][n];
    printf("\nEnter %d * %d matrix elements row by row:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int symmetric = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric)
            break;
    }

    if (symmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is NOT symmetric.\n");

    return 0;
}