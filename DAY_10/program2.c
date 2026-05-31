// --> program to Print reverse pyramid:-- 

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int nsp = 0;
    int nst = ((n * 2) - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }
        nst -= 2;
        nsp++;
        printf("\n");
    }
    return 0;
}