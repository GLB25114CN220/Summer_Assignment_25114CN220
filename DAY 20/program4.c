// --> Write a program to Find column-wise sum:--

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int mat[n][m];

    printf("\nEnter %d * %d matrix elements:\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    printf("\nColumn-wise sums:\n");
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += mat[i][j];
        printf("Column %d sum = %d\n", j + 1, sum);
    }
    return 0;
}