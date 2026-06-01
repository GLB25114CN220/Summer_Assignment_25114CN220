// --> program to Check perfect number

#include <stdio.h>
void factor(int a)
{
    int sum_fact = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum_fact = sum_fact + i;
        }
    }
    if (sum_fact == a)
    {
        printf("%d is the perfect number", a);
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