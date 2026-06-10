// --> Write a program to find Second largest element in an array:--

#include <stdio.h>
int main()
{
    int max1;
    int max2;
    int arr[] = {12, 23, 34, 45, 56, 67, 91, 98, 7};
    int size = sizeof(arr) / sizeof(int);
    if (arr[0] > arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }
    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    printf("%d is the second largest element in an array", max2);
    return 0;
}