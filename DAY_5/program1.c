// *--> Program to check the perfect number:--

#include <stdio.h>
void factor(int a)
{
    int fact;
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            fact = i;
            sum = sum + fact;
        }
    }
    if (sum == a)
    {
        printf("%d is a perfect number", a);
    }
    else
    {
        printf("%d is not a perfect number", a);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    factor(n);
    return 0;
}