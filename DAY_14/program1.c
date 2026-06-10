// --> Write a program to Linear search.

#include <stdio.h>
int linearsearch(int element, int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int element;
    printf("Enter the element:");
    scanf("%d", &element);
    int n = element;

    int arr[] = {1, 22, 33, 43, 54, 67, 87, 98};
    int size = sizeof(arr) / sizeof(int);
    int result = linearsearch(element, arr, size);

    if (result != -1)
    {
        printf("The element %d is found at index %d\n", element, result);
        return 0;
    }
    if (result == -1)
    {
        printf("%d is not found at any index", n);
        return 0;
    }
}