// --> Write a program to Reverse array:-- 

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
    printf("\n");

    for (int j = (n - 1); j > -1; j--)
    {
        printf("%d\n", arr[j]);
    }
    return 0;
}