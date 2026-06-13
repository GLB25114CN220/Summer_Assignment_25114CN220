// --> Write a program to Find common elements:--

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int A[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int B[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &B[i]);
    }

    int C[n1 < n2 ? n1 : n2]; // common elements array
    int k = 0;

    // Find common elements
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (A[i] == B[j])
            {
                // Check if already stored in C
                int found = 0;
                for (int x = 0; x < k; x++)
                {
                    if (C[x] == A[i])
                    {
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    C[k++] = A[i];
                }
            }
        }
    }

    printf("\nCommon elements:\n");
    if (k == 0)
    {
        printf("No common elements found.");
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d ", C[i]);
        }
    }

    return 0;
}