// --> program to Print character pyramid:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int nsp = n - 1;
    int num_1;

    for (int i = 1; i <= n; i++)
    {
        num_1 = 65;
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            int alphabet = (char)num_1;
            printf("%c", alphabet);
            num_1++;
        }
        int num_2 = 65+i-2;
        for (int l = 2; l <= i; l++)
        {
            printf("%c", num_2);
            num_2--;
        }
        nsp--;
        printf("\n");
    }
    return 0;
}