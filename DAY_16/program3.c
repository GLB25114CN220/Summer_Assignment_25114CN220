// --> Write a program to Find pair with given sum:--

#include <stdio.h>
int main()
{
    int n, sum;
    printf("n-->");
    scanf("%d", &n);
    printf("TARGETED SUM --> ");
    scanf("%d", &sum);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int paircount = 0;
    printf("Pairs with given sum are:--\n");

    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] + arr[k] == sum)
            {
                printf("(%d  %d)\n", arr[j], arr[k]);
                paircount++;
            }
        }
    }
    if (paircount == 0)
    {
        printf("No pairs found.\n");
    }
    else
    {
        printf("Total pairs found: %d\n", paircount);
    }
    return 0;
}