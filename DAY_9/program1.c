// --> program to Print reverse star pattern:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int num = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("*");
        }
        num--;
        printf("\n");
    }
    return 0;
}