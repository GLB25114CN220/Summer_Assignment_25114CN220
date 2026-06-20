// --> Write a program to Find row-wise sum:--

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int mat[n][m];

    // Input matrix
    printf("\nEnter %d * %d matrix elements:\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    // Print matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    // Row-wise sum
    printf("\nRow-wise sums:\n");
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += mat[i][j];
        printf("Row %d sum = %d\n", i + 1, sum);
    }

    return 0;
}