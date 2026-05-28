// --> Program to print the multiplication table of a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int r;
    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        printf("%d*%d=%d\n", n, i, r);
    }
    return 0;
}