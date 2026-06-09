// --> Write a program to find even and odd elements:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The even numbers are:--\n");
    for (int j = 0; j <= n - 1; j++)
    {
        if (arr[j] % 2 == 0)
        {
            printf("%d\n", arr[j]);
        }
    }
    printf("\n");
    printf("The odd numbers are:--\n");

    for (int k = 0; k <= n - 1; k++)
    {
        if (arr[k] % 2 != 0)
        {
            printf("%d\n", arr[k]);
        }
    }
    return 0;
}