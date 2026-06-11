// *--> Write a program to Move zeroes to end:--

#include <stdio.h>
int main()
{
    int n;
    printf("n-->");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            arr[temp] = arr[j];
            temp++;
        }
    }
    while (temp < n)
    {
        arr[temp] = 0;
        temp++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}