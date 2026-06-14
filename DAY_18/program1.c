// --> Write a program to Bubble sort:--
// --> Bubble sort means arranging all the elements of an array in ascending order.
// -->  Think of bubbles rising: largest elements move step by step to the end.

#include <stdio.h>
int main()
{
    int n;
    printf("n-->");
    scanf("%d", &n);

    int arr[n];
    for (int num = 0; num < n; num++)
    {
        scanf("%d", &arr[num]);
    }
    int i, temp;
    printf("\nAfter bubble sort:--\n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int l = 0; l < n; l++)
    {
        printf("%d ", arr[l]);
    }
    return 0;
}