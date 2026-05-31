// --> Program to check whether a given number is a Armstrong number or not?

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int b=n;
    int a = n;
    int ld;
    int p = 0;
    int sum = 0;
    int power;
    while (n != 0)
    {
        n = n / 10;
        p++;
    }
    while (a != 0)
    {
        ld = a % 10;
        power=1;
        for(int i=1;i<=p;i++)
        {
            power=power*ld;
        }
        sum = sum + power;
        a=a/10;
    }
    if (sum == b)
    {
        printf("%d is an Armstrong number",b);
    }
    else
    {
        printf("%d is not an Armstrong number",b);
    }
    return 0;
}