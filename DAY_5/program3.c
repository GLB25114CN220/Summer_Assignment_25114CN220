// -->  program to Print factors of a number:--

#include <stdio.h>
void factors(int fact)
{
    for (int i = 1; i <= fact; i++)
    {
        if (fact % i == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("\n");
    printf("The factors of a given number are:_\n\n");

    factors(n);
    return 0;
}