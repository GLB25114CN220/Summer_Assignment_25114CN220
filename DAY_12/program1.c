// --> program to Write function for palindrome:-- 

#include <stdio.h>
void palindrome(int num)
{
    int original = num;
    int ld;
    int sum = 0;
    while (num != 0)
    {
        ld = num % 10;
        sum = ld + (sum * 10);
        num = num / 10;
    }
    if (sum == original)
    {
        printf("%d is a palindrome number", original);
    }
    else
    {
        printf("%d is not a palindrome number", original);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    palindrome(n);
    return 0;
}