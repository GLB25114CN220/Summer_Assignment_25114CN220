// -->  program to Print number pyramid:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        int num = i - 1;
        for (int l = 2; l <= i; l++)
        {
            printf("%d", num);
            num--;
        }
        nsp--;
        printf("\n");
    }
    return 0;
}