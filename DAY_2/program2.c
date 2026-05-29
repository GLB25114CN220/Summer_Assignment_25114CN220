// --> Program to reverse a given number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int r = 0;
    int ld;
    while (n != 0)
    {
        ld = n % 10;
        r = ld + (r * 10);
        n = n / 10;
    }
    printf("The reverse look of the given number is:%d", r);
    return 0;
}