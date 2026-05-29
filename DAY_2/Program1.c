// --> Program to find sum of digits in a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int sum = 0;
    int ld;
    while (n != 0)
    {
        ld = n % 10;
        sum = sum + ld;
        n = n / 10;
    }
    printf("The sum of all digits in a given number is:%d", sum);
    return 0;
}