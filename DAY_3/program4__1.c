// --> Program to find the lcm of two numbers using (formulae)

#include <stdio.h>
int min(int n1, int n2)
{
    int small;
    if (n1 < n2)
    {
        small = n1;
    }
    else
    {
        small = n2;
    }
    return small;
}
int gcd(int c, int d)
{
    int hcf;
    for (int i = 1; (i <= min(c, d)); i++)
    {
        if ((c % i == 0) && (d % i == 0))
        {
            hcf = i;
        }
    }
    return hcf;
}
int table1(int a, int b)
{
    return ((a * b) / (gcd(a, b)));
}
int main()
{
    int n1, n2;
    printf("Enter the number 1:");
    scanf("%d", &n1);
    printf("Enter the number 2:");
    scanf("%d", &n2);

    int LCM = table1(n1, n2);
    printf("The lcm of the given two numbers is:%d", LCM);

    return 0;
}