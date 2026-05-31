// -->  program to Print repeated character pattern:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int num = 65;
    int alpha;
    for (int i = 1; i <= n; i++)
    {
        alpha = (char)num;
        for (int j = 1; j <= i; j++)
        {
            printf("%c", alpha);
        }
        num++;
        printf("\n");
    }
    return 0;
}