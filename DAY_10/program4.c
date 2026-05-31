// -->  program to Print character pyramid:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int num1;
    int num2;
    int nsp = n - 1;
    char alpha1;
    char alpha2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        num1 = 65;
        for (int k = 1; k <= i; k++)
        {
            alpha1 = (char)num1;
            printf("%c", alpha1);
            num1++;
        }
        for (int h = 2; h <= i; h++)
        {
            num2 = 65 + i - h;
            alpha2 = (char)num2;
            printf("%c", alpha2);
            num2--;
        }
        nsp--;
        printf("\n");
    }
    return 0;
}