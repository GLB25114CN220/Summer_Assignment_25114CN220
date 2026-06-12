// --> Write a program to Find maximum frequency element:--

#include <stdio.h>
int main()
{
    int n;
    printf("n-->");
    scanf("%d", &n);

    int arr[n];
    int f = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_freq = 0;
    for (int j = 0; j < n; j++)
    {
        int count = 0;
        for (int k = 0; k < n; k++)
        {
            if (arr[j] == arr[k])
            {
                count++;
            }
        }
        if (count > max_freq)
        {
            max_freq = count;
            f = arr[j];
        }
    }
    if (f != -1)
    {
        printf("The element with max frequency in an array is:%d", f);
    }
    else
    {
        printf("There is no element in an array having max frequency");
    }
    return 0;
}