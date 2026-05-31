// --> Program to print Armstrong numbers in a range

#include <stdio.h>
int main()
{
    int m;
    printf("Enter the number:");
    scanf("%d", &m);

    printf("\n");
    printf("The Armstrong numbers till the given number are:--\n");

    for (int n = 1; n <= m; n++)
    {
        int a = n;
        int b = n;
        int sum = 0;
        int ld;
        int p = 0;
        int power;
        while (a != 0)
        {
            a = a / 10;
            p++;
        }
        a = b;
        while (a != 0)
        {
            ld = a % 10;
            power = 1;
            for (int i = 1; i <= p; i++)
            {
                power = power * ld;
            }
            sum = sum + power;
            a = a / 10;
        }
        if (sum == b)
        {
            printf("%d ", b);
        }
        else
        {
            continue;
        }
    }
    return 0;
}