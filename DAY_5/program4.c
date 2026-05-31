// --> program to find largest prime factor:--

#include <stdio.h>
void prime_fact(int a)
{
    int LPN;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            int is_it_prime = 23;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    is_it_prime = 67;
                    break;
                }
            }
            if (is_it_prime == 23)
            {
                LPN = i;
            }
        }
    }
    printf("%d", LPN);
}

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    printf("The largest prime factor of the given number is:--\n\n");
    prime_fact(n);
    return 0;
}