// --> program to Recursive factorial:--

#include <stdio.h>
int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    int fact;
    fact = a * factorial(a - 1);
    return fact;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int result = factorial(n);
    printf("The factorial of a given number is:%d", result);
    return 0;
}