// *--> Program to find nth Fibonacci term

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int m=n;

    printf("\n");

    int a = 0;
    int b = 1;
    int sum;
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        if (m == i)
        {
            printf("%d ", a);
        }
        a = b;
        b = sum;
    }
    return 0;
}