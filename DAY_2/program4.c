// --> Program to check whether the number is a palindrome number or not?

#include <stdio.h>
int palindrome(int r)
{
    int ld;
    int reverse = 0;
    while (r != 0)
    {
        ld = r % 10;
        reverse = ld + (reverse * 10);
        r=r/10;
    }
    return reverse;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int R = palindrome(n);

    if (R == n)
    {
        printf("The given number is palindrome number.");
    }
    else
    {
        printf("The given number is not a palindrome number.");
    }
    return 0;
}