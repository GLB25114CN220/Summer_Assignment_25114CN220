// -->  program to Print reverse star pattern:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int nst = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        printf("\n");
        nst--;
    }
    return 0;
}