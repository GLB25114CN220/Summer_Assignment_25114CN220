// --> Write a program on matrix multiplication :--

#include <stdio.h>
int main()
{
    int n, m, p;
    printf("Enter rows of M1: ");
    scanf("%d", &n);
    printf("Enter columns of M1: ");
    scanf("%d", &m);
    printf("Enter columns of M2: ");
    scanf("%d", &p);

    int M1[n][m], M2[m][p], Result[n][p];

    // Input Matrix 1
    printf("\nMATRIX 1:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &M1[i][j]);

    // Input Matrix 2
    printf("\nMATRIX 2:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &M2[i][j]);

    // Multiply M1 (n×m) × M2 (m×p) → Result (n×p)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            Result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                Result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    // Print Result
    printf("\nRESULT (M1 * M2) :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}