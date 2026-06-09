// --> Write a program to find largest and smallest element:--

#include <stdio.h>
int main()
{
    printf("Provide the required input:--\n");
    int arr[3];

    for (int i = 0; i <= 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] < arr[1])
    {
        if (arr[1] < arr[2])
        {
            printf("%d is the smallest element\n", arr[0]);
            printf("%d is the largest element\n", arr[2]);
        }
        else //(arr[2]<arr[1])
        {
            printf("%d is the smallest element\n", arr[2]);
            printf("%d is the largest element\n", arr[1]);
        }
    }
    else //(arr[1]<arr[0])
    {
        if (arr[1] < arr[2])
        {
            printf("%d is the smallest element\n", arr[1]);
            printf("%d is the largest element\n", arr[2]);
        }
        else
        { //(arr[2]<arr[1])
            printf("%d is the smallest element\n", arr[2]);
            printf("%d is the largest element\n", arr[0]);
        }
    }
    return 0;
}