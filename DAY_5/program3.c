// --> Program to print factors of a number:--

#include <stdio.h>
void factors(int a)
{
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("%d ", i);
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("\n");
    printf("The factors of a given number are:--\n\n");

    factors(n);
    return 0;
}