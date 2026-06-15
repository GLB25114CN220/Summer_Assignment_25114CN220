// --> Write a program to Subtract matrices:--

#include <stdio.h>
int main()
{
    int n;
    printf("n-->");
    scanf("%d", &n);

    int A[n][n], B[n][n], arr[n][n];
    printf("\nMATRIX 1:--\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nMATRIX 2\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n\nAFTER SUBTRACTION:--\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = A[i][j] - B[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d] ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}