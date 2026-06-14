// --> Write a program to Binary search:--

#include <stdio.h>
#include <stdbool.h>
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
    // In order to sort an array so applying bubble sort technique:-

    printf("\nSORTED ARRAY:--\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int p = 0; p < n; p++)
    {
        printf("%d ", arr[p]);
    }

    printf("\nNow Implementing Binary search\n");

    int es;
    printf("Element to search:");
    scanf("%d", &es);

    int low = 0, high = (n - 1), mid;
    bool flag = false;
    while (low <= high)
    {
        mid = ((low + high) / 2);
        if (es > arr[mid])
        {
            low = mid + 1;
        }
        else if (es < arr[mid])
        {
            high = mid - 1;
        }
        else if (es == arr[mid])
        {
            flag = true;
            break;
        }
    }
    if (flag == true)
    {
        printf("%d do exists in the given array\n", es);
    }
    else
    {
        printf("%d do not exists in the given array\n", es);
    }
    return 0;
}