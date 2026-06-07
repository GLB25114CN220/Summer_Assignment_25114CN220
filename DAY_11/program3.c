// --> program to Write function to check prime:--

#include <stdio.h>
void prime(int p)
{
    int a = 1;
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            a = 0;
            break;
        }
    }
    if (p == 1)
    {
        printf("%d is niether a prime nor a composite number.", p);
    }
    else if (a == 1)
    {
        printf("%d is a prime number.", p);
    }
    else
    {
        printf("%d is a composite number.", p);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    prime(n);
    return 0;
}