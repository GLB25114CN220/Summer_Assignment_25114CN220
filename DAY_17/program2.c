// --> Write a program to Union of arrays:--

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

    int C[n1 + n2]; // Union array
    int k = 0;

    // Copy all elements of A into C
    for (int i = 0; i < n1; i++)
    {
        C[k++] = A[i];
    }

    // Add elements of B if not already present in C
    for (int i = 0; i < n2; i++)
    {
        int found = 0;
        for (int j = 0; j < k; j++)
        {
            if (B[i] == C[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            C[k++] = B[i];
        }
    }

    printf("\nUnion of arrays:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}