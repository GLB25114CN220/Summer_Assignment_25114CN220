// *(imp)--> Write a program to Remove duplicates from array : --

#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    int newSize = 0;
    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;
        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}