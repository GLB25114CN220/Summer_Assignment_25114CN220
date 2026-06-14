// --> Write a program to Sort array in descending order:--
// --> Doing it by selection sort.

#include <stdio.h>
int main()
{
    int n, temp;
    printf("n-->");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nSORTED ARRAY IN DESCENDING ORDER:--\n");

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
    for (int r = 0; r < n / 2; r++)
    {
        temp = arr[r];
        arr[r] = arr[n - r - 1];
        arr[n - r - 1] = temp;
    }
    for (int p = 0; p < n; p++)
    {
        printf("%d ", arr[p]);
    }
    return 0;
}