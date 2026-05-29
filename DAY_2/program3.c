// --> Program to find product of all the digits in a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int ld;
    int product = 1;
    while (n != 0)
    {
        ld = n % 10;
        product = product * ld;
        n = n / 10;
    }
    printf("The product of all digits of a given number is:%d", product);
    return 0;
}