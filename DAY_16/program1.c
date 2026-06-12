// *--> Write a program to Find missing number in array:--

#include <stdio.h>
int main()
{
    int n, var;
    printf("n-->");
    scanf("%d", &n);
    int sum = 0;
    int total_sum;

    int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n-1; j++)
    {
        var = arr[0];
        sum = sum + arr[j];
    }
    total_sum = n * (n + 1) / 2;
    int missing = total_sum - sum;
    printf("\nThe missing number in an array is :%d\n", missing);
    return 0;
}