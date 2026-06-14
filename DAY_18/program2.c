// --> Write a program to Selection sort:--

#include <stdio.h>
int main()
{
    int n, temp;
    printf("n-->");
    scanf("%d", &n);

    int arr[n];
    for (int num = 0; num < n; num++)
    {
        scanf("%d", &arr[num]);
    }
    printf("\nElements of an array after selection sort:--\n");
    int min;
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    printf("\n");
    for (int r = 0; r < n; r++)
    {
        printf("%d ", arr[r]);
    }
    return 0;
}