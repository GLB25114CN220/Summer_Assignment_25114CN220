// --> Write a program to Transpose matrix:--

#include <stdio.h>
int main()
{
    int n, m, temp;
    printf("NO. OF ROWS :");
    scanf("%d", &n);
    printf("NO. OF COLUMNS :");
    scanf("%d", &m);

    int arr[n][m];
    printf("\n\nENTER MATRIX:-\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\nMATRIX AFTER TRANSPOSE:--\n");
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (i != j)
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[j][i];
                    arr[j][i] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("[%d] ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        int t[m][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                t[j][i] = arr[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("[%d] ", t[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}