// Program to generate Fibonacci series:--

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("\n");

    printf("The fibonacci series till nth term is:--\n");

    int a = 0;
    int b = 1;
    int sum;
    for (int i = 1; i <= n; i++)
    {
        sum = a + b;
        printf("%d ", a);
        a = b;
        b = sum;
    }
    return 0;
}