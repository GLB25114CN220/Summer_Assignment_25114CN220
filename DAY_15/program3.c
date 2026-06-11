// --> Write a program to Rotate array right:--

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
    printf("\nArrays after right rotation:--\n");
    int temp = arr[n - 1];

    for (int j = (n - 1); j > 0; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[0] = temp;
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}