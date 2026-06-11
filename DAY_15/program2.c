// --> Write a program to Rotate array left:--

#include <stdio.h>
int main()
{
    int n;
    printf("n-->");
    scanf("%d", &n);

    int arr[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }
    int temp = arr[0];

    printf("\nArrays after left rotation:--\n");
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}