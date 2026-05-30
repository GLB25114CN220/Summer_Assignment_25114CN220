// --> Program to find the gcd of two numbers

#include <stdio.h>
int smallest(int m1, int m2)
{
    int small;
    if (m1 > m2)
    {
        small = m2;
    }
    else
    {
        small = m1;
    }
    return small;
}
int GCD(int a, int b)
{
    int hcf;
    for (int i = 1; (i <= smallest(a, b)); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int n1, n2;
    printf("Enter the number 1:");
    scanf("%d", &n1);
    printf("Enter the number 2:");
    scanf("%d", &n2);

    int result = GCD(n1, n2);
    printf("The gcd of the given two digits is:%d", result);

    return 0;
}