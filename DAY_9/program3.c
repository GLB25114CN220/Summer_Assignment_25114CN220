// -->  program to Print repeated character pattern:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int num = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int alphabet = (char)num;
            printf("%c", alphabet);
        }
        num++;
        printf("\n");
    }
    return 0;
}