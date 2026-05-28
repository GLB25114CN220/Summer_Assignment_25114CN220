// --> Program to calculate sum of first N natural numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of all digits is:%d", sum);
    return 0;
}