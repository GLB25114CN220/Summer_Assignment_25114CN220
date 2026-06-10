// --> Write a program to Frequency of an element:--

#include <stdio.h>
int arr_frequency(int n, int size, int arr[])
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            num = num + 1;
        }
    }
    return num;
}
int main()
{
    int n;
    printf("n-->");
    scanf("%d", &n);

    int arr[] = {1, 2, 33, 2, 54, 2, 87, 98};
    int size = sizeof(arr) / sizeof(int);

    int result = arr_frequency(n, size, arr);
    if (result == 0)
    {
        printf("%d do not found in an array", n);
    }
    else
    {
        printf("%d is found %d times in an array", n, result);
    }
    return 0;
}