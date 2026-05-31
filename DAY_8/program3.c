// --> program to print the character triangle:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num = 65;
        char alpha;
        for (int j = 1; j <= i; j++)
        {
            alpha = (char)num;
            printf("%c", alpha);
            num++;
        }
        printf("\n");
    }
    return 0;
}