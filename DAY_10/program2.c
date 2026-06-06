// -->  program to Print reverse pyramid:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int nst = n + 4;
    int nsp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nsp++;
        nst -= 2;
        printf("\n");
    }
    return 0;
}