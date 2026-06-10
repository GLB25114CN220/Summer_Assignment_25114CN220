// --> Write a program to Find duplicates in array:--

#include <stdio.h>
int main()
{
    printf("The duplicate elements in an array are:--\n");
    int arr[] = {2, 2, 3, 3, 4, 5, 5, 6, 7, 7, 8, 8, 9};
    int x = 0;
    int size = sizeof(arr) / sizeof(int);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[x])
        {
            x = x + 1;
            arr[x] = arr[i];
        }
        else{
            printf("%d ",arr[i]);
        }
    }
    printf("");
    return x;
}