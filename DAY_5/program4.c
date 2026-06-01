// -->  program to Find largest prime factor:--

#include <stdio.h>
void prime_factor(int fact)
{
    int is_prime;
    int largest = 0;
    for (int i = 2; i < fact; i++)
    {
        is_prime = 1;

        if (fact % i == 0)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1)
            {
                largest = i;
            }
        }
    }
    if (largest != 0)
    {
        printf("%d ", largest);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("\n");
    printf("The largest prime factor of the '%d' is:-\n\n", n);

    prime_factor(n);
    return 0;
}