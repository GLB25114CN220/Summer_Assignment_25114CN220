// --> Write a program to Merge arrays:--

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void merge_array(int A[], int B[], int C[], int m, int n)
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }

    while (i < m)
    {
        C[k++] = A[i++];
    }

    while (j < n)
    {
        C[k++] = B[j++];
    }

    printf("\nMerged array (sorted):\n");
    for (int x = 0; x < k; x++)
    {
        printf("%d ", C[x]);
    }
}

int main()
{
    int num;
    printf("n --> ");
    scanf("%d", &num);

    int A[num], B[num], C[2 * num];

    printf("Enter elements of Array 1:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter elements of Array 2:\n");
    for (int j = 0; j < num; j++)
    {
        scanf("%d", &B[j]);
    }

    // Sort both arrays before merging
    qsort(A, num, sizeof(int), compare);
    qsort(B, num, sizeof(int), compare);

    printf("\nARRAY 1 (sorted):\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nARRAY 2 (sorted):\n");
    for (int j = 0; j < num; j++)
    {
        printf("%d ", B[j]);
    }

    merge_array(A, B, C, num, num);

    return 0;
}