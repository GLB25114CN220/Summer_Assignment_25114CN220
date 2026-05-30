// --> Program to check whether the given number is a prime number or not?

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int a = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 0;
            break;
        }
    }
    if (n == 1)
    {
        printf("The given number is neither prime nor composite.");
    }
    else if (a == 1)
    {
        printf("PRIME NUMBER.");
    }
    else
    {
        printf("COMPOSITE NUMBER.");
    }
    return 0;
}